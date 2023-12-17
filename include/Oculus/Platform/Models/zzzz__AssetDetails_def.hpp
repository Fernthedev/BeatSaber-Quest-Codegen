#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetDetails)
namespace Oculus::Platform::Models {
class LanguagePackInfo;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::AssetDetails);
// Type: Oculus.Platform.Models::AssetDetails
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13417))
// CS Name: ::Oculus.Platform.Models::AssetDetails*
class CORDL_TYPE AssetDetails : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field AssetId offset 0x10
 __declspec(property(get=__get_AssetId, put=__set_AssetId)) uint64_t  AssetId;

/// @brief Field AssetType offset 0x18
 __declspec(property(get=__get_AssetType, put=__set_AssetType)) ::StringW  AssetType;

/// @brief Field DownloadStatus offset 0x20
 __declspec(property(get=__get_DownloadStatus, put=__set_DownloadStatus)) ::StringW  DownloadStatus;

/// @brief Field Filepath offset 0x28
 __declspec(property(get=__get_Filepath, put=__set_Filepath)) ::StringW  Filepath;

/// @brief Field IapStatus offset 0x30
 __declspec(property(get=__get_IapStatus, put=__set_IapStatus)) ::StringW  IapStatus;

/// @brief Field LanguageOptional offset 0x38
 __declspec(property(get=__get_LanguageOptional, put=__set_LanguageOptional)) ::Oculus::Platform::Models::LanguagePackInfo*  LanguageOptional;

/// @brief Field Language offset 0x40
 __declspec(property(get=__get_Language, put=__set_Language)) ::Oculus::Platform::Models::LanguagePackInfo*  Language;

/// @brief Field Metadata offset 0x48
 __declspec(property(get=__get_Metadata, put=__set_Metadata)) ::StringW  Metadata;

constexpr void __set_AssetId(uint64_t  value) ;

constexpr uint64_t& __get_AssetId() ;

constexpr uint64_t const& __get_AssetId() const;

constexpr void __set_AssetType(::StringW  value) ;

constexpr ::StringW& __get_AssetType() ;

constexpr ::StringW const& __get_AssetType() const;

constexpr void __set_DownloadStatus(::StringW  value) ;

constexpr ::StringW& __get_DownloadStatus() ;

constexpr ::StringW const& __get_DownloadStatus() const;

constexpr void __set_Filepath(::StringW  value) ;

constexpr ::StringW& __get_Filepath() ;

constexpr ::StringW const& __get_Filepath() const;

constexpr void __set_IapStatus(::StringW  value) ;

constexpr ::StringW& __get_IapStatus() ;

constexpr ::StringW const& __get_IapStatus() const;

constexpr void __set_LanguageOptional(::Oculus::Platform::Models::LanguagePackInfo*  value) ;

constexpr ::Oculus::Platform::Models::LanguagePackInfo* __get_LanguageOptional() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::LanguagePackInfo*> __get_LanguageOptional() const;

constexpr void __set_Language(::Oculus::Platform::Models::LanguagePackInfo*  value) ;

constexpr ::Oculus::Platform::Models::LanguagePackInfo* __get_Language() ;

constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::LanguagePackInfo*> __get_Language() const;

constexpr void __set_Metadata(::StringW  value) ;

constexpr ::StringW& __get_Metadata() ;

constexpr ::StringW const& __get_Metadata() const;

static inline ::Oculus::Platform::Models::AssetDetails* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2704588 size 0x168 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetDetails(AssetDetails && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetDetails", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetDetails(AssetDetails const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssetDetails()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::AssetDetails, 0x50>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::AssetDetails);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::AssetDetails*, "Oculus.Platform.Models", "AssetDetails");
