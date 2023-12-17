#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetFileDownloadCancelResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
// Type: Oculus.Platform.Models::AssetFileDownloadCancelResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13420))
// CS Name: ::Oculus.Platform.Models::AssetFileDownloadCancelResult*
class CORDL_TYPE AssetFileDownloadCancelResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field AssetFileId offset 0x10
 __declspec(property(get=__get_AssetFileId, put=__set_AssetFileId)) uint64_t  AssetFileId;

/// @brief Field AssetId offset 0x18
 __declspec(property(get=__get_AssetId, put=__set_AssetId)) uint64_t  AssetId;

/// @brief Field Filepath offset 0x20
 __declspec(property(get=__get_Filepath, put=__set_Filepath)) ::StringW  Filepath;

/// @brief Field Success offset 0x28
 __declspec(property(get=__get_Success, put=__set_Success)) bool  Success;

constexpr void __set_AssetFileId(uint64_t  value) ;

constexpr uint64_t& __get_AssetFileId() ;

constexpr uint64_t const& __get_AssetFileId() const;

constexpr void __set_AssetId(uint64_t  value) ;

constexpr uint64_t& __get_AssetId() ;

constexpr uint64_t const& __get_AssetId() const;

constexpr void __set_Filepath(::StringW  value) ;

constexpr ::StringW& __get_Filepath() ;

constexpr ::StringW const& __get_Filepath() const;

constexpr void __set_Success(bool  value) ;

constexpr bool& __get_Success() ;

constexpr bool const& __get_Success() const;

static inline ::Oculus::Platform::Models::AssetFileDownloadCancelResult* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2704a70 size 0xac virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetFileDownloadCancelResult(AssetFileDownloadCancelResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetFileDownloadCancelResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetFileDownloadCancelResult(AssetFileDownloadCancelResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetFileDownloadCancelResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetFileDownloadCancelResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetFileDownloadCancelResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetFileDownloadCancelResult*, "Oculus.Platform.Models", "AssetFileDownloadCancelResult");
