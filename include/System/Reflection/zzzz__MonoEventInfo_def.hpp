#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MonoEventInfo)
namespace System::Reflection {
struct EventAttributes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
struct MonoEventInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::MonoEventInfo);
// Type: System.Reflection::MonoEventInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3518))
// CS Name: ::System.Reflection::MonoEventInfo
struct CORDL_TYPE MonoEventInfo : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field declaring_type offset 0x0
 __declspec(property(get=__get_declaring_type, put=__set_declaring_type)) ::System::Type*  declaring_type;

/// @brief Field reflected_type offset 0x8
 __declspec(property(get=__get_reflected_type, put=__set_reflected_type)) ::System::Type*  reflected_type;

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::StringW  name;

/// @brief Field add_method offset 0x18
 __declspec(property(get=__get_add_method, put=__set_add_method)) ::System::Reflection::MethodInfo*  add_method;

/// @brief Field remove_method offset 0x20
 __declspec(property(get=__get_remove_method, put=__set_remove_method)) ::System::Reflection::MethodInfo*  remove_method;

/// @brief Field raise_method offset 0x28
 __declspec(property(get=__get_raise_method, put=__set_raise_method)) ::System::Reflection::MethodInfo*  raise_method;

/// @brief Field attrs offset 0x30
 __declspec(property(get=__get_attrs, put=__set_attrs)) ::System::Reflection::EventAttributes  attrs;

/// @brief Field other_methods offset 0x38
 __declspec(property(get=__get_other_methods, put=__set_other_methods)) ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>  other_methods;

constexpr void __set_declaring_type(::System::Type*  value) ;

constexpr ::System::Type* __get_declaring_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_declaring_type() const;

constexpr void __set_reflected_type(::System::Type*  value) ;

constexpr ::System::Type* __get_reflected_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_reflected_type() const;

constexpr void __set_name(::StringW  value) ;

constexpr ::StringW& __get_name() ;

constexpr ::StringW const& __get_name() const;

constexpr void __set_add_method(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_add_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_add_method() const;

constexpr void __set_remove_method(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_remove_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_remove_method() const;

constexpr void __set_raise_method(::System::Reflection::MethodInfo*  value) ;

constexpr ::System::Reflection::MethodInfo* __get_raise_method() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> __get_raise_method() const;

constexpr void __set_attrs(::System::Reflection::EventAttributes  value) ;

constexpr ::System::Reflection::EventAttributes& __get_attrs() ;

constexpr ::System::Reflection::EventAttributes const& __get_attrs() const;

constexpr void __set_other_methods(::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>  value) ;

constexpr ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>& __get_other_methods() ;

constexpr ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*> const& __get_other_methods() const;

// Ctor Parameters [CppParam { name: "declaring_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "reflected_type", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "add_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "remove_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "raise_method", ty: "::System::Reflection::MethodInfo*", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::System::Reflection::EventAttributes", modifiers: "", def_value: None }, CppParam { name: "other_methods", ty: "::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>", modifiers: "", def_value: None }]
constexpr MonoEventInfo(::System::Type*  declaring_type, ::System::Type*  reflected_type, ::StringW  name, ::System::Reflection::MethodInfo*  add_method, ::System::Reflection::MethodInfo*  remove_method, ::System::Reflection::MethodInfo*  raise_method, ::System::Reflection::EventAttributes  attrs, ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*>  other_methods) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoEventInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoEventInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::MonoEventInfo, 0x40>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoEventInfo, "System.Reflection", "MonoEventInfo");
