#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoMethodInfo)
namespace System::Runtime::InteropServices {
class MarshalAsAttribute;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Type;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::Reflection {
struct MonoMethodInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoMethodInfo);
// Type: System.Reflection::MonoMethodInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3522))
// CS Name: ::System.Reflection::MonoMethodInfo
struct CORDL_TYPE MonoMethodInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field parent offset 0x0
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Type*  parent;

/// @brief Field ret offset 0x8
 __declspec(property(get=__get_ret, put=__set_ret)) ::System::Type*  ret;

/// @brief Field attrs offset 0x10
 __declspec(property(get=__get_attrs, put=__set_attrs)) ::System::Reflection::MethodAttributes  attrs;

/// @brief Field iattrs offset 0x14
 __declspec(property(get=__get_iattrs, put=__set_iattrs)) ::System::Reflection::MethodImplAttributes  iattrs;

/// @brief Field callconv offset 0x18
 __declspec(property(get=__get_callconv, put=__set_callconv)) ::System::Reflection::CallingConventions  callconv;

constexpr void __set_parent(::System::Type*  value) ;

constexpr ::System::Type* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_parent() const;

constexpr void __set_ret(::System::Type*  value) ;

constexpr ::System::Type* __get_ret() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_ret() const;

constexpr void __set_attrs(::System::Reflection::MethodAttributes  value) ;

constexpr ::System::Reflection::MethodAttributes& __get_attrs() ;

constexpr ::System::Reflection::MethodAttributes const& __get_attrs() const;

constexpr void __set_iattrs(::System::Reflection::MethodImplAttributes  value) ;

constexpr ::System::Reflection::MethodImplAttributes& __get_iattrs() ;

constexpr ::System::Reflection::MethodImplAttributes const& __get_iattrs() const;

constexpr void __set_callconv(::System::Reflection::CallingConventions  value) ;

constexpr ::System::Reflection::CallingConventions& __get_callconv() ;

constexpr ::System::Reflection::CallingConventions const& __get_callconv() const;

/// @brief Method get_method_info addr 0x24f391c size 0x4 virtual false final false
static inline void get_method_info(::cordl_internals::intptr_t  handle, ByRef<::System::Reflection::MonoMethodInfo>  info) ;

/// @brief Method get_method_attributes addr 0x24f3920 size 0x4 virtual false final false
static inline int32_t get_method_attributes(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetMethodInfo addr 0x24f3924 size 0x30 virtual false final false
static inline ::System::Reflection::MonoMethodInfo GetMethodInfo(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetDeclaringType addr 0x24f3954 size 0x28 virtual false final false
static inline ::System::Type* GetDeclaringType(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetReturnType addr 0x24f397c size 0x28 virtual false final false
static inline ::System::Type* GetReturnType(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetAttributes addr 0x24f39a4 size 0x4 virtual false final false
static inline ::System::Reflection::MethodAttributes GetAttributes(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetCallingConvention addr 0x24f39a8 size 0x28 virtual false final false
static inline ::System::Reflection::CallingConventions GetCallingConvention(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetMethodImplementationFlags addr 0x24f39d0 size 0x28 virtual false final false
static inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::cordl_internals::intptr_t  handle) ;

/// @brief Method get_parameter_info addr 0x24f39f8 size 0x4 virtual false final false
static inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> get_parameter_info(::cordl_internals::intptr_t  handle, ::System::Reflection::MemberInfo*  member) ;

/// @brief Method GetParametersInfo addr 0x24f39fc size 0x4 virtual false final false
static inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> GetParametersInfo(::cordl_internals::intptr_t  handle, ::System::Reflection::MemberInfo*  member) ;

/// @brief Method get_retval_marshal addr 0x24f3a00 size 0x4 virtual false final false
static inline ::System::Runtime::InteropServices::MarshalAsAttribute* get_retval_marshal(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetReturnParameterInfo addr 0x24f3a04 size 0x5c virtual false final false
static inline ::System::Reflection::ParameterInfo* GetReturnParameterInfo(::System::Reflection::RuntimeMethodInfo*  method) ;

// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "ret", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::MethodAttributes", modifiers: "", def_value: None }, CppParam { name: "iattrs", ty: "::System::Reflection::MethodImplAttributes", modifiers: "", def_value: None }, CppParam { name: "callconv", ty: "::System::Reflection::CallingConventions", modifiers: "", def_value: None }]
constexpr MonoMethodInfo(::System::Type*  parent, ::System::Type*  ret, ::System::Reflection::MethodAttributes  attrs, ::System::Reflection::MethodImplAttributes  iattrs, ::System::Reflection::CallingConventions  callconv) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoMethodInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoMethodInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoMethodInfo, 0x20>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
