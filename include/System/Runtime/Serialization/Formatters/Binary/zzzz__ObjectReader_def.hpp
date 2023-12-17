#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectReader)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerStack;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class IntSizedArray;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TypeNAssembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryAssemblyInfo;
}
namespace System::Reflection {
class AssemblyName;
}
namespace System::Runtime::Serialization {
class ObjectManager;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ReadObjectInfo;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class InternalFE;
}
namespace System {
class Object;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ParseRecord;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectReader;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TopLevelAssemblyTypeResolver;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __ObjectReader__TypeNAssembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver);
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly);
// Type: ::TypeNAssembly
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3286))
// CS Name: ::ObjectReader::TypeNAssembly*
class CORDL_TYPE __ObjectReader__TypeNAssembly : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field assemblyName offset 0x18
 __declspec(property(get=__get_assemblyName, put=__set_assemblyName)) ::StringW  assemblyName;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_assemblyName(::StringW  value) ;

constexpr ::StringW& __get_assemblyName() ;

constexpr ::StringW const& __get_assemblyName() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly* New_ctor() ;

/// @brief Method .ctor addr 0x24cf538 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TypeNAssembly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ObjectReader__TypeNAssembly(__ObjectReader__TypeNAssembly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TypeNAssembly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ObjectReader__TypeNAssembly(__ObjectReader__TypeNAssembly const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ObjectReader__TypeNAssembly()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly, 0x20>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
// Type: ::TopLevelAssemblyTypeResolver
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3287))
// CS Name: ::ObjectReader::TopLevelAssemblyTypeResolver*
class CORDL_TYPE __ObjectReader__TopLevelAssemblyTypeResolver : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_topLevelAssembly offset 0x10
 __declspec(property(get=__get_m_topLevelAssembly, put=__set_m_topLevelAssembly)) ::System::Reflection::Assembly*  m_topLevelAssembly;

constexpr void __set_m_topLevelAssembly(::System::Reflection::Assembly*  value) ;

constexpr ::System::Reflection::Assembly* __get_m_topLevelAssembly() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> __get_m_topLevelAssembly() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver* New_ctor(::System::Reflection::Assembly*  topLevelAssembly) ;

/// @brief Method .ctor addr 0x24cf5d0 size 0x28 virtual false final false
inline void _ctor(::System::Reflection::Assembly*  topLevelAssembly) ;

/// @brief Method ResolveType addr 0x24cf7ac size 0x68 virtual false final false
inline ::System::Type* ResolveType(::System::Reflection::Assembly*  assembly, ::StringW  simpleTypeName, bool  ignoreCase) ;

// Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ObjectReader__TopLevelAssemblyTypeResolver(__ObjectReader__TopLevelAssemblyTypeResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ObjectReader__TopLevelAssemblyTypeResolver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ObjectReader__TopLevelAssemblyTypeResolver(__ObjectReader__TopLevelAssemblyTypeResolver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ObjectReader__TopLevelAssemblyTypeResolver()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
// Type: System.Runtime.Serialization.Formatters.Binary::ObjectReader
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3288))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::ObjectReader*
class CORDL_TYPE ObjectReader : public ::System::Object {
public:
// Declarations
using TopLevelAssemblyTypeResolver = ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver;

using TypeNAssembly = ::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::System::Object)]{};

/// @brief Field m_stream offset 0x10
 __declspec(property(get=__get_m_stream, put=__set_m_stream)) ::System::IO::Stream*  m_stream;

/// @brief Field m_surrogates offset 0x18
 __declspec(property(get=__get_m_surrogates, put=__set_m_surrogates)) ::System::Runtime::Serialization::ISurrogateSelector*  m_surrogates;

/// @brief Field m_context offset 0x20
 __declspec(property(get=__get_m_context, put=__set_m_context)) ::System::Runtime::Serialization::StreamingContext  m_context;

/// @brief Field m_objectManager offset 0x30
 __declspec(property(get=__get_m_objectManager, put=__set_m_objectManager)) ::System::Runtime::Serialization::ObjectManager*  m_objectManager;

/// @brief Field formatterEnums offset 0x38
 __declspec(property(get=__get_formatterEnums, put=__set_formatterEnums)) ::System::Runtime::Serialization::Formatters::Binary::InternalFE*  formatterEnums;

/// @brief Field m_binder offset 0x40
 __declspec(property(get=__get_m_binder, put=__set_m_binder)) ::System::Runtime::Serialization::SerializationBinder*  m_binder;

/// @brief Field topId offset 0x48
 __declspec(property(get=__get_topId, put=__set_topId)) int64_t  topId;

/// @brief Field bSimpleAssembly offset 0x50
 __declspec(property(get=__get_bSimpleAssembly, put=__set_bSimpleAssembly)) bool  bSimpleAssembly;

/// @brief Field handlerObject offset 0x58
 __declspec(property(get=__get_handlerObject, put=__set_handlerObject)) ::System::Object*  handlerObject;

/// @brief Field m_topObject offset 0x60
 __declspec(property(get=__get_m_topObject, put=__set_m_topObject)) ::System::Object*  m_topObject;

/// @brief Field headers offset 0x68
 __declspec(property(get=__get_headers, put=__set_headers)) ::ArrayW<::System::Runtime::Remoting::Messaging::Header*,::Array<::System::Runtime::Remoting::Messaging::Header*>*>  headers;

/// @brief Field handler offset 0x70
 __declspec(property(get=__get_handler, put=__set_handler)) ::System::Runtime::Remoting::Messaging::HeaderHandler*  handler;

/// @brief Field serObjectInfoInit offset 0x78
 __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit;

/// @brief Field m_formatterConverter offset 0x80
 __declspec(property(get=__get_m_formatterConverter, put=__set_m_formatterConverter)) ::System::Runtime::Serialization::IFormatterConverter*  m_formatterConverter;

/// @brief Field stack offset 0x88
 __declspec(property(get=__get_stack, put=__set_stack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack*  stack;

/// @brief Field valueFixupStack offset 0x90
 __declspec(property(get=__get_valueFixupStack, put=__set_valueFixupStack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack*  valueFixupStack;

/// @brief Field crossAppDomainArray offset 0x98
 __declspec(property(get=__get_crossAppDomainArray, put=__set_crossAppDomainArray)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  crossAppDomainArray;

/// @brief Field bFullDeserialization offset 0xa0
 __declspec(property(get=__get_bFullDeserialization, put=__set_bFullDeserialization)) bool  bFullDeserialization;

/// @brief Field bOldFormatDetected offset 0xa1
 __declspec(property(get=__get_bOldFormatDetected, put=__set_bOldFormatDetected)) bool  bOldFormatDetected;

/// @brief Field valTypeObjectIdTable offset 0xa8
 __declspec(property(get=__get_valTypeObjectIdTable, put=__set_valTypeObjectIdTable)) ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*  valTypeObjectIdTable;

/// @brief Field typeCache offset 0xb0
 __declspec(property(get=__get_typeCache, put=__set_typeCache)) ::System::Runtime::Serialization::Formatters::Binary::NameCache*  typeCache;

/// @brief Field previousAssemblyString offset 0xb8
 __declspec(property(get=__get_previousAssemblyString, put=__set_previousAssemblyString)) ::StringW  previousAssemblyString;

/// @brief Field previousName offset 0xc0
 __declspec(property(get=__get_previousName, put=__set_previousName)) ::StringW  previousName;

/// @brief Field previousType offset 0xc8
 __declspec(property(get=__get_previousType, put=__set_previousType)) ::System::Type*  previousType;

 __declspec(property(get=get_ValueFixupStack)) ::System::Runtime::Serialization::Formatters::Binary::SerStack*  ValueFixupStack;

 __declspec(property(get=get_TopObject, put=set_TopObject)) ::System::Object*  TopObject;

constexpr void __set_m_stream(::System::IO::Stream*  value) ;

constexpr ::System::IO::Stream* __get_m_stream() ;

constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> __get_m_stream() const;

constexpr void __set_m_surrogates(::System::Runtime::Serialization::ISurrogateSelector*  value) ;

constexpr ::System::Runtime::Serialization::ISurrogateSelector* __get_m_surrogates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISurrogateSelector*> __get_m_surrogates() const;

constexpr void __set_m_context(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr ::System::Runtime::Serialization::StreamingContext& __get_m_context() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __get_m_context() const;

constexpr void __set_m_objectManager(::System::Runtime::Serialization::ObjectManager*  value) ;

constexpr ::System::Runtime::Serialization::ObjectManager* __get_m_objectManager() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ObjectManager*> __get_m_objectManager() const;

constexpr void __set_formatterEnums(::System::Runtime::Serialization::Formatters::Binary::InternalFE*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalFE* __get_formatterEnums() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::InternalFE*> __get_formatterEnums() const;

constexpr void __set_m_binder(::System::Runtime::Serialization::SerializationBinder*  value) ;

constexpr ::System::Runtime::Serialization::SerializationBinder* __get_m_binder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationBinder*> __get_m_binder() const;

constexpr void __set_topId(int64_t  value) ;

constexpr int64_t& __get_topId() ;

constexpr int64_t const& __get_topId() const;

constexpr void __set_bSimpleAssembly(bool  value) ;

constexpr bool& __get_bSimpleAssembly() ;

constexpr bool const& __get_bSimpleAssembly() const;

constexpr void __set_handlerObject(::System::Object*  value) ;

constexpr ::System::Object* __get_handlerObject() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_handlerObject() const;

constexpr void __set_m_topObject(::System::Object*  value) ;

constexpr ::System::Object* __get_m_topObject() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_m_topObject() const;

constexpr void __set_headers(::ArrayW<::System::Runtime::Remoting::Messaging::Header*,::Array<::System::Runtime::Remoting::Messaging::Header*>*>  value) ;

constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*,::Array<::System::Runtime::Remoting::Messaging::Header*>*>& __get_headers() ;

constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header*,::Array<::System::Runtime::Remoting::Messaging::Header*>*> const& __get_headers() const;

constexpr void __set_handler(::System::Runtime::Remoting::Messaging::HeaderHandler*  value) ;

constexpr ::System::Runtime::Remoting::Messaging::HeaderHandler* __get_handler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::HeaderHandler*> __get_handler() const;

constexpr void __set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* __get_serObjectInfoInit() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> __get_serObjectInfoInit() const;

constexpr void __set_m_formatterConverter(::System::Runtime::Serialization::IFormatterConverter*  value) ;

constexpr ::System::Runtime::Serialization::IFormatterConverter* __get_m_formatterConverter() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::IFormatterConverter*> __get_m_formatterConverter() const;

constexpr void __set_stack(::System::Runtime::Serialization::Formatters::Binary::SerStack*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* __get_stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> __get_stack() const;

constexpr void __set_valueFixupStack(::System::Runtime::Serialization::Formatters::Binary::SerStack*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::SerStack* __get_valueFixupStack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerStack*> __get_valueFixupStack() const;

constexpr void __set_crossAppDomainArray(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_crossAppDomainArray() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_crossAppDomainArray() const;

constexpr void __set_bFullDeserialization(bool  value) ;

constexpr bool& __get_bFullDeserialization() ;

constexpr bool const& __get_bFullDeserialization() const;

constexpr void __set_bOldFormatDetected(bool  value) ;

constexpr bool& __get_bOldFormatDetected() ;

constexpr bool const& __get_bOldFormatDetected() const;

constexpr void __set_valTypeObjectIdTable(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* __get_valTypeObjectIdTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*> __get_valTypeObjectIdTable() const;

constexpr void __set_typeCache(::System::Runtime::Serialization::Formatters::Binary::NameCache*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::NameCache* __get_typeCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::NameCache*> __get_typeCache() const;

constexpr void __set_previousAssemblyString(::StringW  value) ;

constexpr ::StringW& __get_previousAssemblyString() ;

constexpr ::StringW const& __get_previousAssemblyString() const;

constexpr void __set_previousName(::StringW  value) ;

constexpr ::StringW& __get_previousName() ;

constexpr ::StringW const& __get_previousName() const;

constexpr void __set_previousType(::System::Type*  value) ;

constexpr ::System::Type* __get_previousType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_previousType() const;

/// @brief Method get_ValueFixupStack addr 0x24cb424 size 0x80 virtual false final false
inline ::System::Runtime::Serialization::Formatters::Binary::SerStack* get_ValueFixupStack() ;

/// @brief Method get_TopObject addr 0x24cb4a4 size 0x8 virtual false final false
inline ::System::Object* get_TopObject() ;

/// @brief Method set_TopObject addr 0x24cb4ac size 0x14 virtual false final false
inline void set_TopObject(::System::Object*  value) ;

static inline ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* New_ctor(::System::IO::Stream*  stream, ::System::Runtime::Serialization::ISurrogateSelector*  selector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*  formatterEnums, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method .ctor addr 0x24cb4c0 size 0x114 virtual false final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Runtime::Serialization::ISurrogateSelector*  selector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::InternalFE*  formatterEnums, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method Deserialize addr 0x24cb5dc size 0x310 virtual false final false
inline ::System::Object* Deserialize(::System::Runtime::Remoting::Messaging::HeaderHandler*  handler, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*  serParser, bool  fCheck) ;

/// @brief Method HasSurrogate addr 0x24cbec0 size 0xd4 virtual false final false
inline bool HasSurrogate(::System::Type*  t) ;

/// @brief Method CheckSerializable addr 0x24cbf94 size 0x138 virtual false final false
inline void CheckSerializable(::System::Type*  t) ;

/// @brief Method InitFullDeserialization addr 0x24cc0cc size 0x110 virtual false final false
inline void InitFullDeserialization() ;

/// @brief Method CrossAppDomainArray addr 0x24cc1dc size 0x30 virtual false final false
inline ::System::Object* CrossAppDomainArray(int32_t  index) ;

/// @brief Method CreateReadObjectInfo addr 0x24cc20c size 0x34 virtual false final false
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type*  objectType) ;

/// @brief Method CreateReadObjectInfo addr 0x24cc240 size 0x44 virtual false final false
inline ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateReadObjectInfo(::System::Type*  objectType, ::ArrayW<::StringW,::Array<::StringW>*>  memberNames, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  memberTypes) ;

/// @brief Method Parse addr 0x24cc284 size 0x144 virtual false final false
inline void Parse(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseError addr 0x24cced0 size 0x2d8 virtual false final false
inline void ParseError(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  processing, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  onStack) ;

/// @brief Method ParseSerializedStreamHeader addr 0x24cc3c8 size 0x18 virtual false final false
inline void ParseSerializedStreamHeader(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseSerializedStreamHeaderEnd addr 0x24cc3e0 size 0x18 virtual false final false
inline void ParseSerializedStreamHeaderEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseObject addr 0x24cc3f8 size 0x314 virtual false final false
inline void ParseObject(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseObjectEnd addr 0x24cc70c size 0x230 virtual false final false
inline void ParseObjectEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseArray addr 0x24cd2a4 size 0x68c virtual false final false
inline void ParseArray(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method NextRectangleMap addr 0x24cdcc0 size 0xc4 virtual false final false
inline void NextRectangleMap(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseArrayMember addr 0x24cdd84 size 0x79c virtual false final false
inline void ParseArrayMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseArrayMemberEnd addr 0x24ce950 size 0x28 virtual false final false
inline void ParseArrayMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseMember addr 0x24cc93c size 0x4d8 virtual false final false
inline void ParseMember(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseMemberEnd addr 0x24cce14 size 0xbc virtual false final false
inline void ParseMemberEnd(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr) ;

/// @brief Method ParseString addr 0x24ce554 size 0x40 virtual false final false
inline void ParseString(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  parentPr) ;

/// @brief Method RegisterObject addr 0x24cd970 size 0x8 virtual false final false
inline void RegisterObject(::System::Object*  obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  objectPr) ;

/// @brief Method RegisterObject addr 0x24ce9bc size 0x124 virtual false final false
inline void RegisterObject(::System::Object*  obj, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  pr, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  objectPr, bool  bIsString) ;

/// @brief Method GetId addr 0x24ceae0 size 0xdc virtual false final false
inline int64_t GetId(int64_t  objectId) ;

/// @brief Method Bind addr 0x24ced50 size 0x58 virtual false final false
inline ::System::Type* Bind(::StringW  assemblyString, ::StringW  typeString) ;

/// @brief Method FastBindToType addr 0x24ceda8 size 0x2f0 virtual false final false
inline ::System::Type* FastBindToType(::StringW  assemblyName, ::StringW  typeName) ;

/// @brief Method ResolveSimpleAssemblyName addr 0x24cf140 size 0x60 virtual false final false
static inline ::System::Reflection::Assembly* ResolveSimpleAssemblyName(::System::Reflection::AssemblyName*  assemblyName) ;

/// @brief Method GetSimplyNamedTypeFromAssembly addr 0x24cf1a0 size 0x254 virtual false final false
static inline void GetSimplyNamedTypeFromAssembly(::System::Reflection::Assembly*  assm, ::StringW  typeName, ByRef<::System::Type*>  type) ;

/// @brief Method GetType addr 0x24cf5f8 size 0x1b4 virtual false final false
inline ::System::Type* GetType(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*  assemblyInfo, ::StringW  name) ;

/// @brief Method CheckTypeForwardedTo addr 0x24cf3f4 size 0x144 virtual false final false
static inline void CheckTypeForwardedTo(::System::Reflection::Assembly*  sourceAssembly, ::System::Reflection::Assembly*  destAssembly, ::System::Type*  resolvedType) ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectReader(ObjectReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectReader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectReader(ObjectReader const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectReader()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::ObjectReader, 0xd0>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver");
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::__ObjectReader__TypeNAssembly*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TypeNAssembly");
