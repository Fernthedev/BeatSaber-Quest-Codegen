#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDownloadProgressResult)
namespace Oculus::Platform {
struct AppStatus;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AppDownloadProgressResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AppDownloadProgressResult);
// Type: Oculus.Platform.Models::AppDownloadProgressResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13412))
// CS Name: ::Oculus.Platform.Models::AppDownloadProgressResult*
class CORDL_TYPE AppDownloadProgressResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DownloadBytes offset 0x10
 __declspec(property(get=__get_DownloadBytes, put=__set_DownloadBytes)) int64_t  DownloadBytes;

/// @brief Field DownloadedBytes offset 0x18
 __declspec(property(get=__get_DownloadedBytes, put=__set_DownloadedBytes)) int64_t  DownloadedBytes;

/// @brief Field StatusCode offset 0x20
 __declspec(property(get=__get_StatusCode, put=__set_StatusCode)) ::Oculus::Platform::AppStatus  StatusCode;

constexpr void __set_DownloadBytes(int64_t  value) ;

constexpr int64_t& __get_DownloadBytes() ;

constexpr int64_t const& __get_DownloadBytes() const;

constexpr void __set_DownloadedBytes(int64_t  value) ;

constexpr int64_t& __get_DownloadedBytes() ;

constexpr int64_t const& __get_DownloadedBytes() const;

constexpr void __set_StatusCode(::Oculus::Platform::AppStatus  value) ;

constexpr ::Oculus::Platform::AppStatus& __get_StatusCode() ;

constexpr ::Oculus::Platform::AppStatus const& __get_StatusCode() const;

static inline ::Oculus::Platform::Models::AppDownloadProgressResult* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2703de8 size 0x98 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppDownloadProgressResult(AppDownloadProgressResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppDownloadProgressResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppDownloadProgressResult(AppDownloadProgressResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppDownloadProgressResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AppDownloadProgressResult, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AppDownloadProgressResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AppDownloadProgressResult*, "Oculus.Platform.Models", "AppDownloadProgressResult");
