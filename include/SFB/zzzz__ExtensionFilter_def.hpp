#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ExtensionFilter)
// Forward declare root types
namespace SFB {
struct ExtensionFilter;
}
// Write type traits
MARK_VAL_T(::SFB::ExtensionFilter);
// Type: SFB::ExtensionFilter
namespace SFB {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6089))
// CS Name: ::SFB::ExtensionFilter
struct CORDL_TYPE ExtensionFilter : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _name offset 0x0
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _extensions offset 0x8
 __declspec(property(get=__get__extensions, put=__set__extensions)) ::ArrayW<::StringW,::Array<::StringW>*>  _extensions;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__extensions(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__extensions() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__extensions() const;

/// @brief Method .ctor addr 0x2321300 size 0x8 virtual false final false
inline void _ctor(::StringW  filterName, ::ArrayW<::StringW,::Array<::StringW>*>  filterExtensions) ;

// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr ExtensionFilter(::StringW  _name, ::ArrayW<::StringW,::Array<::StringW>*>  _extensions) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ExtensionFilter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ExtensionFilter()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::SFB::ExtensionFilter, 0x10>, "Size mismatch!");

} // namespace end def SFB
DEFINE_IL2CPP_ARG_TYPE(::SFB::ExtensionFilter, "SFB", "ExtensionFilter");
