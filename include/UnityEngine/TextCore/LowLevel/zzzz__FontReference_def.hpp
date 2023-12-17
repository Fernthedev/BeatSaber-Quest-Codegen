#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontReference)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontReference);
// Type: UnityEngine.TextCore.LowLevel::FontReference
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15536))
// CS Name: ::UnityEngine.TextCore.LowLevel::FontReference
struct CORDL_TYPE FontReference : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field familyName offset 0x0
 __declspec(property(get=__get_familyName, put=__set_familyName)) ::StringW  familyName;

/// @brief Field styleName offset 0x8
 __declspec(property(get=__get_styleName, put=__set_styleName)) ::StringW  styleName;

/// @brief Field faceIndex offset 0x10
 __declspec(property(get=__get_faceIndex, put=__set_faceIndex)) int32_t  faceIndex;

/// @brief Field filePath offset 0x18
 __declspec(property(get=__get_filePath, put=__set_filePath)) ::StringW  filePath;

constexpr void __set_familyName(::StringW  value) ;

constexpr ::StringW& __get_familyName() ;

constexpr ::StringW const& __get_familyName() const;

constexpr void __set_styleName(::StringW  value) ;

constexpr ::StringW& __get_styleName() ;

constexpr ::StringW const& __get_styleName() const;

constexpr void __set_faceIndex(int32_t  value) ;

constexpr int32_t& __get_faceIndex() ;

constexpr int32_t const& __get_faceIndex() const;

constexpr void __set_filePath(::StringW  value) ;

constexpr ::StringW& __get_filePath() ;

constexpr ::StringW const& __get_filePath() const;

// Ctor Parameters [CppParam { name: "familyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "styleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None }]
constexpr FontReference(::StringW  familyName, ::StringW  styleName, int32_t  faceIndex, ::StringW  filePath) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontReference(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontReference()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontReference, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontReference, "UnityEngine.TextCore.LowLevel", "FontReference");
