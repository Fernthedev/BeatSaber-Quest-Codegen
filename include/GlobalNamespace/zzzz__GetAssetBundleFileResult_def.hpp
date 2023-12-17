#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GetAssetBundleFileResult)
// Forward declare root types
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GetAssetBundleFileResult);
// Type: ::GetAssetBundleFileResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4413))
// CS Name: ::GetAssetBundleFileResult
struct CORDL_TYPE GetAssetBundleFileResult : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field isError offset 0x0
 __declspec(property(get=__get_isError, put=__set_isError)) bool  isError;

/// @brief Field assetBundlePath offset 0x8
 __declspec(property(get=__get_assetBundlePath, put=__set_assetBundlePath)) ::StringW  assetBundlePath;

constexpr void __set_isError(bool  value) ;

constexpr bool& __get_isError() ;

constexpr bool const& __get_isError() const;

constexpr void __set_assetBundlePath(::StringW  value) ;

constexpr ::StringW& __get_assetBundlePath() ;

constexpr ::StringW const& __get_assetBundlePath() const;

/// @brief Method .ctor addr 0x234cdc8 size 0x10 virtual false final false
inline void _ctor(bool  isError, ::StringW  assetBundlePath) ;

// Ctor Parameters [CppParam { name: "isError", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "assetBundlePath", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetAssetBundleFileResult(bool  isError, ::StringW  assetBundlePath) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GetAssetBundleFileResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GetAssetBundleFileResult()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetAssetBundleFileResult, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetAssetBundleFileResult, "", "GetAssetBundleFileResult");
