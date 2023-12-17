#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WriteObjectInfo)
namespace System::Runtime::Serialization {
class ISurrogateSelector;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class ObjectWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoInit;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class SerObjectInfoCache;
}
namespace System::Runtime::Serialization {
class IFormatterConverter;
}
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializationSurrogate;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class WriteObjectInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
// Type: System.Runtime.Serialization.Formatters.Binary::WriteObjectInfo
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3281))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::WriteObjectInfo*
class CORDL_TYPE WriteObjectInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field objectInfoId offset 0x10
 __declspec(property(get=__get_objectInfoId, put=__set_objectInfoId)) int32_t  objectInfoId;

/// @brief Field obj offset 0x18
 __declspec(property(get=__get_obj, put=__set_obj)) ::System::Object*  obj;

/// @brief Field objectType offset 0x20
 __declspec(property(get=__get_objectType, put=__set_objectType)) ::System::Type*  objectType;

/// @brief Field isSi offset 0x28
 __declspec(property(get=__get_isSi, put=__set_isSi)) bool  isSi;

/// @brief Field isNamed offset 0x29
 __declspec(property(get=__get_isNamed, put=__set_isNamed)) bool  isNamed;

/// @brief Field isTyped offset 0x2a
 __declspec(property(get=__get_isTyped, put=__set_isTyped)) bool  isTyped;

/// @brief Field isArray offset 0x2b
 __declspec(property(get=__get_isArray, put=__set_isArray)) bool  isArray;

/// @brief Field si offset 0x30
 __declspec(property(get=__get_si, put=__set_si)) ::System::Runtime::Serialization::SerializationInfo*  si;

/// @brief Field cache offset 0x38
 __declspec(property(get=__get_cache, put=__set_cache)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*  cache;

/// @brief Field memberData offset 0x40
 __declspec(property(get=__get_memberData, put=__set_memberData)) ::ArrayW<::System::Object*,::Array<::System::Object*>*>  memberData;

/// @brief Field serializationSurrogate offset 0x48
 __declspec(property(get=__get_serializationSurrogate, put=__set_serializationSurrogate)) ::System::Runtime::Serialization::ISerializationSurrogate*  serializationSurrogate;

/// @brief Field context offset 0x50
 __declspec(property(get=__get_context, put=__set_context)) ::System::Runtime::Serialization::StreamingContext  context;

/// @brief Field serObjectInfoInit offset 0x60
 __declspec(property(get=__get_serObjectInfoInit, put=__set_serObjectInfoInit)) ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit;

/// @brief Field objectId offset 0x68
 __declspec(property(get=__get_objectId, put=__set_objectId)) int64_t  objectId;

/// @brief Field assemId offset 0x70
 __declspec(property(get=__get_assemId, put=__set_assemId)) int64_t  assemId;

/// @brief Field binderTypeName offset 0x78
 __declspec(property(get=__get_binderTypeName, put=__set_binderTypeName)) ::StringW  binderTypeName;

/// @brief Field binderAssemblyString offset 0x80
 __declspec(property(get=__get_binderAssemblyString, put=__set_binderAssemblyString)) ::StringW  binderAssemblyString;

constexpr void __set_objectInfoId(int32_t  value) ;

constexpr int32_t& __get_objectInfoId() ;

constexpr int32_t const& __get_objectInfoId() const;

constexpr void __set_obj(::System::Object*  value) ;

constexpr ::System::Object* __get_obj() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_obj() const;

constexpr void __set_objectType(::System::Type*  value) ;

constexpr ::System::Type* __get_objectType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_objectType() const;

constexpr void __set_isSi(bool  value) ;

constexpr bool& __get_isSi() ;

constexpr bool const& __get_isSi() const;

constexpr void __set_isNamed(bool  value) ;

constexpr bool& __get_isNamed() ;

constexpr bool const& __get_isNamed() const;

constexpr void __set_isTyped(bool  value) ;

constexpr bool& __get_isTyped() ;

constexpr bool const& __get_isTyped() const;

constexpr void __set_isArray(bool  value) ;

constexpr bool& __get_isArray() ;

constexpr bool const& __get_isArray() const;

constexpr void __set_si(::System::Runtime::Serialization::SerializationInfo*  value) ;

constexpr ::System::Runtime::Serialization::SerializationInfo* __get_si() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> __get_si() const;

constexpr void __set_cache(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* __get_cache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*> __get_cache() const;

constexpr void __set_memberData(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value) ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& __get_memberData() ;

constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& __get_memberData() const;

constexpr void __set_serializationSurrogate(::System::Runtime::Serialization::ISerializationSurrogate*  value) ;

constexpr ::System::Runtime::Serialization::ISerializationSurrogate* __get_serializationSurrogate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::ISerializationSurrogate*> __get_serializationSurrogate() const;

constexpr void __set_context(::System::Runtime::Serialization::StreamingContext  value) ;

constexpr ::System::Runtime::Serialization::StreamingContext& __get_context() ;

constexpr ::System::Runtime::Serialization::StreamingContext const& __get_context() const;

constexpr void __set_serObjectInfoInit(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  value) ;

constexpr ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit* __get_serObjectInfoInit() ;

constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*> __get_serObjectInfoInit() const;

constexpr void __set_objectId(int64_t  value) ;

constexpr int64_t& __get_objectId() ;

constexpr int64_t const& __get_objectId() const;

constexpr void __set_assemId(int64_t  value) ;

constexpr int64_t& __get_assemId() ;

constexpr int64_t const& __get_assemId() const;

constexpr void __set_binderTypeName(::StringW  value) ;

constexpr ::StringW& __get_binderTypeName() ;

constexpr ::StringW const& __get_binderTypeName() const;

constexpr void __set_binderAssemblyString(::StringW  value) ;

constexpr ::StringW& __get_binderAssemblyString() ;

constexpr ::StringW const& __get_binderAssemblyString() const;

static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24c7f2c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method ObjectEnd addr 0x24c7f34 size 0xc virtual false final false
inline void ObjectEnd() ;

/// @brief Method InternalInit addr 0x24c7f60 size 0x20 virtual false final false
inline void InternalInit() ;

/// @brief Method Serialize addr 0x24c7f80 size 0x90 virtual false final false
static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Object*  obj, ::System::Runtime::Serialization::ISurrogateSelector*  surrogateSelector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter*  converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*  objectWriter, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method InitSerialize addr 0x24c80e8 size 0x4d8 virtual false final false
inline void InitSerialize(::System::Object*  obj, ::System::Runtime::Serialization::ISurrogateSelector*  surrogateSelector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter*  converter, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*  objectWriter, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method Serialize addr 0x24c8df8 size 0x88 virtual false final false
static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* Serialize(::System::Type*  objectType, ::System::Runtime::Serialization::ISurrogateSelector*  surrogateSelector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter*  converter, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method InitSerialize addr 0x24c8e80 size 0x2dc virtual false final false
inline void InitSerialize(::System::Type*  objectType, ::System::Runtime::Serialization::ISurrogateSelector*  surrogateSelector, ::System::Runtime::Serialization::StreamingContext  context, ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit, ::System::Runtime::Serialization::IFormatterConverter*  converter, ::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method InitSiWrite addr 0x24c86d0 size 0x2f8 virtual false final false
inline void InitSiWrite() ;

/// @brief Method CheckTypeForwardedFrom addr 0x24c89c8 size 0x158 virtual false final false
static inline void CheckTypeForwardedFrom(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*  cache, ::System::Type*  objectType, ::StringW  binderAssemblyString) ;

/// @brief Method InitNoMembers addr 0x24c85c0 size 0xe8 virtual false final false
inline void InitNoMembers() ;

/// @brief Method InitMemberInfo addr 0x24c8b20 size 0x2d8 virtual false final false
inline void InitMemberInfo() ;

/// @brief Method GetTypeFullName addr 0x24c04bc size 0x28 virtual false final false
inline ::StringW GetTypeFullName() ;

/// @brief Method GetAssemblyString addr 0x24c0494 size 0x28 virtual false final false
inline ::StringW GetAssemblyString() ;

/// @brief Method InvokeSerializationBinder addr 0x24c86a8 size 0x28 virtual false final false
inline void InvokeSerializationBinder(::System::Runtime::Serialization::SerializationBinder*  binder) ;

/// @brief Method GetMemberType addr 0x24c915c size 0x16c virtual false final false
inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo*  objMember) ;

/// @brief Method GetMemberInfo addr 0x24c92c8 size 0xa4 virtual false final false
inline void GetMemberInfo(ByRef<::ArrayW<::StringW,::Array<::StringW>*>>  outMemberNames, ByRef<::ArrayW<::System::Type*,::Array<::System::Type*>*>>  outMemberTypes, ByRef<::ArrayW<::System::Object*,::Array<::System::Object*>*>>  outMemberData) ;

/// @brief Method GetObjectInfo addr 0x24c8010 size 0xd8 virtual false final false
static inline ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* GetObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit) ;

/// @brief Method PutObjectInfo addr 0x24c7f40 size 0x20 virtual false final false
static inline void PutObjectInfo(::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*  serObjectInfoInit, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*  objectInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteObjectInfo(WriteObjectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteObjectInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteObjectInfo(WriteObjectInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WriteObjectInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo, 0x88>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
