
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_io_ObjectOutputStream__
#define __java_io_ObjectOutputStream__

#pragma interface

#include <java/io/OutputStream.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace io
      {
          class ObjectIdentityMap2Int;
      }
      namespace security
      {
        namespace action
        {
            class SetAccessibleAction;
        }
      }
    }
  }
}

class java::io::ObjectOutputStream : public ::java::io::OutputStream
{

public:
  ObjectOutputStream(::java::io::OutputStream *);
  virtual void writeObject(::java::lang::Object *);
  virtual void writeUnshared(::java::lang::Object *);
private:
  void writeObject(::java::lang::Object *, jboolean);
public: // actually protected
  virtual void writeClassDescriptor(::java::io::ObjectStreamClass *);
public:
  virtual void defaultWriteObject();
private:
  void markFieldsWritten();
public:
  virtual void reset();
private:
  void reset(jboolean);
public:
  virtual void useProtocolVersion(jint);
public: // actually protected
  virtual void annotateClass(::java::lang::Class *);
  virtual void annotateProxyClass(::java::lang::Class *);
  virtual ::java::lang::Object * replaceObject(::java::lang::Object *);
  virtual jboolean enableReplaceObject(jboolean);
  virtual void writeStreamHeader();
  ObjectOutputStream();
  virtual void writeObjectOverride(::java::lang::Object *);
public:
  virtual void write(jint);
  virtual void write(JArray< jbyte > *);
  virtual void write(JArray< jbyte > *, jint, jint);
  virtual void flush();
public: // actually protected
  virtual void drain();
public:
  virtual void close();
  virtual void writeBoolean(jboolean);
  virtual void writeByte(jint);
  virtual void writeShort(jint);
  virtual void writeChar(jint);
  virtual void writeInt(jint);
  virtual void writeLong(jlong);
  virtual void writeFloat(jfloat);
  virtual void writeDouble(jdouble);
  virtual void writeBytes(::java::lang::String *);
  virtual void writeChars(::java::lang::String *);
  virtual void writeUTF(::java::lang::String *);
  virtual ::java::io::ObjectOutputStream$PutField * putFields();
  virtual void writeFields();
private:
  void writeBlockDataHeader(jint);
  jint findHandle(::java::lang::Object *);
  jint assignNewHandle(::java::lang::Object *);
  void clearHandles();
  void writeArraySizeAndElements(::java::lang::Object *, ::java::lang::Class *);
  void writeFields(::java::lang::Object *, ::java::io::ObjectStreamClass *);
  void writeFields(::java::lang::Object *, JArray< ::java::io::ObjectStreamField * > *);
public: // actually package-private
  virtual jboolean setBlockDataMode(jboolean);
private:
  void callWriteMethod(::java::lang::Object *, ::java::io::ObjectStreamClass *);
  void dumpElementln(::java::lang::String *, ::java::lang::Object *);
  void dumpElementln(::java::lang::String *);
  static jboolean overridesMethods(::java::lang::Class *);
  static const jint BUFFER_SIZE = 1024;
  static jint defaultProtocolVersion;
  ::java::io::DataOutputStream * __attribute__((aligned(__alignof__( ::java::io::OutputStream)))) dataOutput;
  jboolean writeDataAsBlocks;
  ::java::io::DataOutputStream * realOutput;
  ::java::io::DataOutputStream * blockDataOutput;
  JArray< jbyte > * blockData;
  jint blockDataCount;
  ::java::lang::Object * currentObject;
public: // actually package-private
  ::java::io::ObjectStreamClass * currentObjectStreamClass;
private:
  ::java::io::ObjectOutputStream$PutField * currentPutField;
  jboolean fieldsAlreadyWritten;
  jboolean replacementEnabled;
  jboolean isSerializing;
  jint nextOID;
  ::gnu::java::io::ObjectIdentityMap2Int * OIDLookupTable;
  jint protocolVersion;
  jboolean useSubclassMethod;
  ::gnu::java::security::action::SetAccessibleAction * setAccessible;
  jint depth;
  jboolean dump;
  static const jboolean DEBUG = 0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_io_ObjectOutputStream__
