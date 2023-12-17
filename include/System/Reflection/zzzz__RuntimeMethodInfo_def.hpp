#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMethodInfo)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class Module;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Delegate;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct PInvokeAttributes;
}
namespace System {
class Exception;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeMethodInfo);
// Type: System.Reflection::RuntimeMethodInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3479))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3523))
// CS Name: ::System.Reflection::RuntimeMethodInfo*
class CORDL_TYPE RuntimeMethodInfo : public ::System::Reflection::MethodInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Reflection::MethodInfo)]{};

/// @brief Field mhandle offset 0x10
 __declspec(property(get=__get_mhandle, put=__set_mhandle)) ::cordl_internals::intptr_t  mhandle;

/// @brief Field name offset 0x18
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field reftype offset 0x20
 __declspec(property(get=__get_reftype, put=__set_reftype)) ::System::Type*  reftype;

 __declspec(property(get=get_BindingFlags)) ::System::Reflection::BindingFlags  BindingFlags;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_ReflectedTypeInternal)) ::System::RuntimeType*  ReflectedTypeInternal;

 __declspec(property(get=get_ReturnParameter)) ::System::Reflection::ParameterInfo*  ReturnParameter;

 __declspec(property(get=get_ReturnType)) ::System::Type*  ReturnType;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

 __declspec(property(get=get_MethodHandle)) ::System::RuntimeMethodHandle  MethodHandle;

 __declspec(property(get=get_Attributes)) ::System::Reflection::MethodAttributes  Attributes;

 __declspec(property(get=get_CallingConvention)) ::System::Reflection::CallingConventions  CallingConvention;

 __declspec(property(get=get_ReflectedType)) ::System::Type*  ReflectedType;

 __declspec(property(get=get_DeclaringType)) ::System::Type*  DeclaringType;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_IsGenericMethodDefinition)) bool  IsGenericMethodDefinition;

 __declspec(property(get=get_IsGenericMethod)) bool  IsGenericMethod;

 __declspec(property(get=get_ContainsGenericParameters)) bool  ContainsGenericParameters;

 __declspec(property(get=get_IsSecurityCritical)) bool  IsSecurityCritical;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

constexpr void __set_mhandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_mhandle() ;

constexpr ::cordl_internals::intptr_t const& __get_mhandle() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_reftype(::System::Type*  value) ;

constexpr ::System::Type* __get_reftype() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_reftype() const;

/// @brief Method get_BindingFlags addr 0x24f3a60 size 0x8 virtual false final false
inline ::System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_Module addr 0x24f3a68 size 0x4 virtual true final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_ReflectedTypeInternal addr 0x24f3af8 size 0x84 virtual false final false
inline ::System::RuntimeType* get_ReflectedTypeInternal() ;

/// @brief Method FormatNameAndSig addr 0x24f3b7c size 0x164 virtual true final false
inline ::StringW FormatNameAndSig(bool  serialization) ;

/// @brief Method CreateDelegate addr 0x24f3ce0 size 0x18 virtual true final false
inline ::System::Delegate* CreateDelegate(::System::Type*  delegateType, ::System::Object*  target) ;

/// @brief Method ToString addr 0x24f3cf8 size 0x90 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetRuntimeModule addr 0x24f3a6c size 0x8c virtual false final false
inline ::System::Reflection::RuntimeModule* GetRuntimeModule() ;

/// @brief Method GetObjectData addr 0x24f3d88 size 0x120 virtual true final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method SerializationToString addr 0x24eedb0 size 0x9c virtual false final false
inline ::StringW SerializationToString() ;

/// @brief Method GetMethodFromHandleNoGenericCheck addr 0x24f3ea8 size 0x54 virtual false final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle  handle) ;

/// @brief Method GetMethodFromHandleNoGenericCheck addr 0x24f3f04 size 0x8 virtual false final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle  handle, ::System::RuntimeTypeHandle  reflectedType) ;

/// @brief Method GetMethodFromHandleInternalType addr 0x24e88d4 size 0x8 virtual false final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::cordl_internals::intptr_t  method_handle, ::cordl_internals::intptr_t  type_handle) ;

/// @brief Method GetMethodFromHandleInternalType_native addr 0x24f3efc size 0x8 virtual false final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::cordl_internals::intptr_t  method_handle, ::cordl_internals::intptr_t  type_handle, bool  genericCheck) ;

static inline ::System::Reflection::RuntimeMethodInfo* New_ctor() ;

/// @brief Method .ctor addr 0x24f3f0c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method get_name addr 0x24f3f14 size 0x4 virtual false final false
static inline ::StringW get_name(::System::Reflection::MethodBase*  method) ;

/// @brief Method get_base_method addr 0x24f3f18 size 0x8 virtual false final false
static inline ::System::Reflection::RuntimeMethodInfo* get_base_method(::System::Reflection::RuntimeMethodInfo*  method, bool  definition) ;

/// @brief Method get_metadata_token addr 0x24f3f20 size 0x4 virtual false final false
static inline int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo*  method) ;

/// @brief Method GetBaseDefinition addr 0x24f3f24 size 0x8 virtual true final false
inline ::System::Reflection::MethodInfo* GetBaseDefinition() ;

/// @brief Method GetBaseMethod addr 0x24f3f2c size 0x8 virtual false final false
inline ::System::Reflection::MethodInfo* GetBaseMethod() ;

/// @brief Method get_ReturnParameter addr 0x24f3f34 size 0x4 virtual true final false
inline ::System::Reflection::ParameterInfo* get_ReturnParameter() ;

/// @brief Method get_ReturnType addr 0x24f3f38 size 0x2c virtual true final false
inline ::System::Type* get_ReturnType() ;

/// @brief Method get_MetadataToken addr 0x24f3f64 size 0x4 virtual true final false
inline int32_t get_MetadataToken() ;

/// @brief Method GetMethodImplementationFlags addr 0x24f3f68 size 0x2c virtual true final false
inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetParameters addr 0x24f3f94 size 0x90 virtual true final false
inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> GetParameters() ;

/// @brief Method GetParametersInternal addr 0x24f4024 size 0xc virtual true final false
inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> GetParametersInternal() ;

/// @brief Method GetParametersCount addr 0x24f4030 size 0x24 virtual true final false
inline int32_t GetParametersCount() ;

/// @brief Method InternalInvoke addr 0x24f4054 size 0x4 virtual false final false
inline ::System::Object* InternalInvoke(::System::Object*  obj, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters, ByRef<::System::Exception*>  exc) ;

/// @brief Method Invoke addr 0x24f4058 size 0x2f4 virtual true final false
inline ::System::Object* Invoke(::System::Object*  obj, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  parameters, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method ConvertValues addr 0x24f434c size 0x2b8 virtual false final false
static inline void ConvertValues(::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  pinfo, ::System::Globalization::CultureInfo*  culture, ::System::Reflection::BindingFlags  invokeAttr) ;

/// @brief Method get_MethodHandle addr 0x24f4604 size 0x8 virtual true final false
inline ::System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_Attributes addr 0x24f460c size 0x8 virtual true final false
inline ::System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_CallingConvention addr 0x24f4614 size 0x2c virtual true final false
inline ::System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_ReflectedType addr 0x24f4640 size 0x8 virtual true final false
inline ::System::Type* get_ReflectedType() ;

/// @brief Method get_DeclaringType addr 0x24f4648 size 0x2c virtual true final false
inline ::System::Type* get_DeclaringType() ;

/// @brief Method get_Name addr 0x24f4674 size 0x14 virtual true final false
inline ::StringW get_Name() ;

/// @brief Method IsDefined addr 0x24f4688 size 0x70 virtual true final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f46f8 size 0x68 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributes addr 0x24f4760 size 0x70 virtual true final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetPInvoke addr 0x24f47d0 size 0x4 virtual false final false
inline void GetPInvoke(ByRef<::System::Reflection::PInvokeAttributes>  flags, ByRef<::StringW>  entryPoint, ByRef<::StringW>  dllName) ;

/// @brief Method GetPseudoCustomAttributes addr 0x24f47d4 size 0x16c virtual false final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetPseudoCustomAttributes() ;

/// @brief Method GetPseudoCustomAttributesData addr 0x24f4940 size 0x1cc virtual false final false
inline ::ArrayW<::System::Reflection::CustomAttributeData*,::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData() ;

/// @brief Method GetDllImportAttributeData addr 0x24f4b0c size 0x71c virtual false final false
inline ::System::Reflection::CustomAttributeData* GetDllImportAttributeData() ;

/// @brief Method MakeGenericMethod addr 0x24f5228 size 0x34c virtual true final false
inline ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*,::Array<::System::Type*>*>  methodInstantiation) ;

/// @brief Method MakeGenericMethod_impl addr 0x24f5574 size 0x4 virtual false final false
inline ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*,::Array<::System::Type*>*>  types) ;

/// @brief Method GetGenericArguments addr 0x24f5578 size 0x4 virtual true final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetGenericArguments() ;

/// @brief Method GetGenericMethodDefinition_impl addr 0x24f557c size 0x4 virtual false final false
inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl() ;

/// @brief Method GetGenericMethodDefinition addr 0x24f5580 size 0x50 virtual true final false
inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition() ;

/// @brief Method get_IsGenericMethodDefinition addr 0x24f55d0 size 0x4 virtual true final false
inline bool get_IsGenericMethodDefinition() ;

/// @brief Method get_IsGenericMethod addr 0x24f55d4 size 0x4 virtual true final false
inline bool get_IsGenericMethod() ;

/// @brief Method get_ContainsGenericParameters addr 0x24f55d8 size 0xc8 virtual true final false
inline bool get_ContainsGenericParameters() ;

/// @brief Method get_core_clr_security_level addr 0x24f56a0 size 0x8 virtual false final false
static inline int32_t get_core_clr_security_level() ;

/// @brief Method get_IsSecurityCritical addr 0x24f56a8 size 0x8 virtual true final false
inline bool get_IsSecurityCritical() ;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMethodInfo(RuntimeMethodInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMethodInfo(RuntimeMethodInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RuntimeMethodInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeMethodInfo, 0x28>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
