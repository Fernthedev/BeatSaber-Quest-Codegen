#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__RtFieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeFieldInfo)
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
class Binder;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System {
struct TypedReference;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeFieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeFieldInfo);
// Type: System.Reflection::RuntimeFieldInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3520))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3521))
// CS Name: ::System.Reflection::RuntimeFieldInfo*
class CORDL_TYPE RuntimeFieldInfo : public ::System::Reflection::RtFieldInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Reflection::RtFieldInfo)]{};

/// @brief Field klass offset 0x10
 __declspec(property(get=__get_klass, put=__set_klass)) ::cordl_internals::intptr_t  klass;

/// @brief Field fhandle offset 0x18
 __declspec(property(get=__get_fhandle, put=__set_fhandle)) ::System::RuntimeFieldHandle  fhandle;

/// @brief Field name offset 0x20
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field type offset 0x28
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

/// @brief Field attrs offset 0x30
 __declspec(property(get=__get_attrs, put=__set_attrs)) ::System::Reflection::FieldAttributes  attrs;

 __declspec(property(get=get_BindingFlags)) ::System::Reflection::BindingFlags  BindingFlags;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_ReflectedTypeInternal)) ::System::RuntimeType*  ReflectedTypeInternal;

 __declspec(property(get=get_Attributes)) ::System::Reflection::FieldAttributes  Attributes;

 __declspec(property(get=get_FieldHandle)) ::System::RuntimeFieldHandle  FieldHandle;

 __declspec(property(get=get_FieldType)) ::System::Type*  FieldType;

 __declspec(property(get=get_ReflectedType)) ::System::Type*  ReflectedType;

 __declspec(property(get=get_DeclaringType)) ::System::Type*  DeclaringType;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set_klass(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_klass() ;

constexpr ::cordl_internals::intptr_t const& __get_klass() const;

constexpr void __set_fhandle(::System::RuntimeFieldHandle  value) ;

constexpr ::System::RuntimeFieldHandle& __get_fhandle() ;

constexpr ::System::RuntimeFieldHandle const& __get_fhandle() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

constexpr void __set_attrs(::System::Reflection::FieldAttributes  value) ;

constexpr ::System::Reflection::FieldAttributes& __get_attrs() ;

constexpr ::System::Reflection::FieldAttributes const& __get_attrs() const;

/// @brief Method get_BindingFlags addr 0x24f2c80 size 0x8 virtual false final false
inline ::System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x24f2c88 size 0x4 virtual true final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method GetDeclaringTypeInternal addr 0x24f2ca8 size 0x84 virtual false final false
inline ::System::RuntimeType* GetDeclaringTypeInternal() ;

/// @brief Method get_ReflectedTypeInternal addr 0x24f2d2c size 0x84 virtual false final false
inline ::System::RuntimeType* get_ReflectedTypeInternal() ;

/// @brief Method GetRuntimeModule addr 0x24f2c8c size 0x1c virtual false final false
inline ::System::Reflection::RuntimeModule* GetRuntimeModule() ;

/// @brief Method GetObjectData addr 0x24f2db0 size 0xbc virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method UnsafeGetValue addr 0x24f2e6c size 0x4 virtual true final false
inline ::System::Object* UnsafeGetValue(::System::Object*  obj) ;

/// @brief Method CheckConsistency addr 0x24f2e70 size 0x180 virtual true final false
inline void CheckConsistency(::System::Object*  target) ;

/// @brief Method UnsafeSetValue addr 0x24f2ff0 size 0x64 virtual true final false
inline void UnsafeSetValue(::System::Object*  obj, ::System::Object*  value, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method SetValueDirect addr 0x24f3054 size 0x164 virtual true final false
inline void SetValueDirect(::System::TypedReference  obj, ::System::Object*  value) ;

/// @brief Method get_Attributes addr 0x24f31b8 size 0x8 virtual true final false
inline ::System::Reflection::FieldAttributes get_Attributes() ;

/// @brief Method get_FieldHandle addr 0x24f31c0 size 0x8 virtual true final false
inline ::System::RuntimeFieldHandle get_FieldHandle() ;

/// @brief Method ResolveType addr 0x24f31c8 size 0x4 virtual false final false
inline ::System::Type* ResolveType() ;

/// @brief Method get_FieldType addr 0x24f31cc size 0x7c virtual true final false
inline ::System::Type* get_FieldType() ;

/// @brief Method GetParentType addr 0x24f3248 size 0x8 virtual false final false
inline ::System::Type* GetParentType(bool  declaring) ;

/// @brief Method get_ReflectedType addr 0x24f3250 size 0x8 virtual true final false
inline ::System::Type* get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x24f3258 size 0x8 virtual true final false
inline ::System::Type* get_DeclaringType() ;

/// @brief Method get_Name addr 0x24f3260 size 0x8 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method IsDefined addr 0x24f3268 size 0x70 virtual true final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f32d8 size 0x68 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f3340 size 0x70 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetFieldOffset addr 0x24f33b0 size 0x4 virtual true final false
inline int32_t GetFieldOffset() ;

/// @brief Method GetValueInternal addr 0x24f33b4 size 0x4 virtual false final false
inline ::System::Object* GetValueInternal(::System::Object*  obj) ;

/// @brief Method GetValue addr 0x24f33b8 size 0x1a0 virtual true final false
inline ::System::Object* GetValue(::System::Object*  obj) ;

/// @brief Method ToString addr 0x24f35d8 size 0x68 virtual true final false
inline ::StringW ToString() ;

/// @brief Method SetValueInternal addr 0x24f3640 size 0x4 virtual false final false
static inline void SetValueInternal(::System::Reflection::FieldInfo*  fi, ::System::Object*  obj, ::System::Object*  value) ;

/// @brief Method SetValue addr 0x24f3644 size 0x2c4 virtual true final false
inline void SetValue(::System::Object*  obj, ::System::Object*  val, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method GetRawConstantValue addr 0x24f3908 size 0x4 virtual true final false
inline ::System::Object* GetRawConstantValue() ;

/// @brief Method CheckGeneric addr 0x24f3558 size 0x80 virtual false final false
inline void CheckGeneric() ;

/// @brief Method get_MetadataToken addr 0x24f390c size 0x4 virtual true final false
inline int32_t get_MetadataToken() ;

/// @brief Method get_metadata_token addr 0x24f3910 size 0x4 virtual false final false
static inline int32_t get_metadata_token(::System::Reflection::RuntimeFieldInfo*  monoField) ;

static inline ::System::Reflection::RuntimeFieldInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24f3914 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeFieldInfo(RuntimeFieldInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeFieldInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeFieldInfo(RuntimeFieldInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeFieldInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeFieldInfo, 0x38>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeFieldInfo*, "System.Reflection", "RuntimeFieldInfo");
