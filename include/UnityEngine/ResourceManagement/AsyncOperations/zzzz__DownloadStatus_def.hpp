#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadStatus)
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus);
// Type: UnityEngine.ResourceManagement.AsyncOperations::DownloadStatus
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14036))
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::DownloadStatus
struct CORDL_TYPE DownloadStatus : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field TotalBytes offset 0x0
 __declspec(property(get=__get_TotalBytes, put=__set_TotalBytes)) int64_t  TotalBytes;

/// @brief Field DownloadedBytes offset 0x8
 __declspec(property(get=__get_DownloadedBytes, put=__set_DownloadedBytes)) int64_t  DownloadedBytes;

/// @brief Field IsDone offset 0x10
 __declspec(property(get=__get_IsDone, put=__set_IsDone)) bool  IsDone;

 __declspec(property(get=get_Percent)) float_t  Percent;

constexpr void __set_TotalBytes(int64_t  value) ;

constexpr int64_t& __get_TotalBytes() ;

constexpr int64_t const& __get_TotalBytes() const;

constexpr void __set_DownloadedBytes(int64_t  value) ;

constexpr int64_t& __get_DownloadedBytes() ;

constexpr int64_t const& __get_DownloadedBytes() const;

constexpr void __set_IsDone(bool  value) ;

constexpr bool& __get_IsDone() ;

constexpr bool const& __get_IsDone() const;

/// @brief Method get_Percent addr 0x2bdd6b8 size 0x38 virtual false final false
inline float_t get_Percent() ;

// Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "IsDone", ty: "bool", modifiers: "", def_value: None }]
constexpr DownloadStatus(int64_t  TotalBytes, int64_t  DownloadedBytes, bool  IsDone) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DownloadStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DownloadStatus()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, "UnityEngine.ResourceManagement.AsyncOperations", "DownloadStatus");
