#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MonoPropertyInfo)
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct PropertyAttributes;
}
// Forward declare root types
namespace System::Reflection {
struct MonoPropertyInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoPropertyInfo);
// Type: System.Reflection::MonoPropertyInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3527))
// CS Name: ::System.Reflection::MonoPropertyInfo
struct CORDL_TYPE MonoPropertyInfo : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field parent offset 0x0
 __declspec(property(get=__get_parent, put=__set_parent)) ::System::Type*  parent;

/// @brief Field declaring_type offset 0x8
 __declspec(property(get=__get_declaring_type, put=__set_declaring_type)) ::System::Type*  declaring_type;

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field get_method offset 0x18
 __declspec(property(get=__get_get_method, put=__set_get_method)) ::System::Reflection::MethodInfo*  get_method;

/// @brief Field set_method offset 0x20
 __declspec(property(get=__get_set_method, put=__set_set_method)) ::System::Reflection::MethodInfo*  set_method;

/// @brief Field attrs offset 0x28
 __declspec(property(get=__get_attrs, put=__set_attrs)) ::System::Reflection::PropertyAttributes  attrs;

constexpr void __set_parent(::System::Type*  value) ;

constexpr ::System::Type* __get_parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_parent() const;

constexpr void __set_declaring_type(::System::Type*  value) ;

constexpr ::System::Type* __get_declaring_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_declaring_type() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_get_method(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_get_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_get_method() const;

constexpr void __set_set_method(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_set_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_set_method() const;

constexpr void __set_attrs(::System::Reflection::PropertyAttributes  value) ;

constexpr ::System::Reflection::PropertyAttributes& __get_attrs() ;

constexpr ::System::Reflection::PropertyAttributes const& __get_attrs() const;

// Ctor Parameters [CppParam { name: "parent", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "get_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "set_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::PropertyAttributes", modifiers: "", def_value: None }]
constexpr MonoPropertyInfo(::System::Type*  parent, ::System::Type*  declaring_type, ::StringW  name, ::System::Reflection::MethodInfo*  get_method, ::System::Reflection::MethodInfo*  set_method, ::System::Reflection::PropertyAttributes  attrs) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoPropertyInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoPropertyInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoPropertyInfo, 0x30>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoPropertyInfo, "System.Reflection", "MonoPropertyInfo");
