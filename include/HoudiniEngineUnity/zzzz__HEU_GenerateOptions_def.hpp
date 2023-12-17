#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HEU_GenerateOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_GenerateOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_GenerateOptions);
// Type: HoudiniEngineUnity::HEU_GenerateOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9794))
// CS Name: ::HoudiniEngineUnity::HEU_GenerateOptions
struct CORDL_TYPE HEU_GenerateOptions : public ::bs_hook::ValueTypeWrapper<0x5> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5};

/// @brief Field _generateUVs offset 0x0
 __declspec(property(get=__get__generateUVs, put=__set__generateUVs)) bool  _generateUVs;

/// @brief Field _generateTangents offset 0x1
 __declspec(property(get=__get__generateTangents, put=__set__generateTangents)) bool  _generateTangents;

/// @brief Field _generateNormals offset 0x2
 __declspec(property(get=__get__generateNormals, put=__set__generateNormals)) bool  _generateNormals;

/// @brief Field _useLODGroups offset 0x3
 __declspec(property(get=__get__useLODGroups, put=__set__useLODGroups)) bool  _useLODGroups;

/// @brief Field _splitPoints offset 0x4
 __declspec(property(get=__get__splitPoints, put=__set__splitPoints)) bool  _splitPoints;

constexpr void __set__generateUVs(bool  value) ;

constexpr bool& __get__generateUVs() ;

constexpr bool const& __get__generateUVs() const;

constexpr void __set__generateTangents(bool  value) ;

constexpr bool& __get__generateTangents() ;

constexpr bool const& __get__generateTangents() const;

constexpr void __set__generateNormals(bool  value) ;

constexpr bool& __get__generateNormals() ;

constexpr bool const& __get__generateNormals() const;

constexpr void __set__useLODGroups(bool  value) ;

constexpr bool& __get__useLODGroups() ;

constexpr bool const& __get__useLODGroups() const;

constexpr void __set__splitPoints(bool  value) ;

constexpr bool& __get__splitPoints() ;

constexpr bool const& __get__splitPoints() const;

// Ctor Parameters [CppParam { name: "_generateUVs", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_generateTangents", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_generateNormals", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_useLODGroups", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_splitPoints", ty: "bool", modifiers: "", def_value: None }]
constexpr HEU_GenerateOptions(bool  _generateUVs, bool  _generateTangents, bool  _generateNormals, bool  _useLODGroups, bool  _splitPoints) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HEU_GenerateOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x5>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HEU_GenerateOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GenerateOptions, 0x5>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GenerateOptions, "HoudiniEngineUnity", "HEU_GenerateOptions");
