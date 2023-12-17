#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ChangelogEntry)
namespace UnityEngine::ProBuilder {
class SemVer;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ChangelogEntry);
// Type: UnityEngine.ProBuilder::ChangelogEntry
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12107))
// CS Name: ::UnityEngine.ProBuilder::ChangelogEntry*
class CORDL_TYPE ChangelogEntry : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_VersionInfo offset 0x10
 __declspec(property(get=__get_m_VersionInfo, put=__set_m_VersionInfo)) ::UnityEngine::ProBuilder::SemVer*  m_VersionInfo;

/// @brief Field m_ReleaseNotes offset 0x18
 __declspec(property(get=__get_m_ReleaseNotes, put=__set_m_ReleaseNotes)) ::StringW  m_ReleaseNotes;

 __declspec(property(get=get_versionInfo)) ::UnityEngine::ProBuilder::SemVer*  versionInfo;

 __declspec(property(get=get_releaseNotes)) ::StringW  releaseNotes;

constexpr void __set_m_VersionInfo(::UnityEngine::ProBuilder::SemVer*  value) ;

constexpr ::UnityEngine::ProBuilder::SemVer* __get_m_VersionInfo() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::SemVer*> __get_m_VersionInfo() const;

constexpr void __set_m_ReleaseNotes(::StringW  value) ;

constexpr ::StringW& __get_m_ReleaseNotes() ;

constexpr ::StringW const& __get_m_ReleaseNotes() const;

/// @brief Method get_versionInfo addr 0x2b3bc7c size 0x8 virtual false final false
inline ::UnityEngine::ProBuilder::SemVer* get_versionInfo() ;

/// @brief Method get_releaseNotes addr 0x2b3bc84 size 0x8 virtual false final false
inline ::StringW get_releaseNotes() ;

static inline ::UnityEngine::ProBuilder::ChangelogEntry* New_ctor(::UnityEngine::ProBuilder::SemVer*  version, ::StringW  releaseNotes) ;

/// @brief Method .ctor addr 0x2b3bc8c size 0x2c virtual false final false
inline void _ctor(::UnityEngine::ProBuilder::SemVer*  version, ::StringW  releaseNotes) ;

/// @brief Method ToString addr 0x2b3bcb8 size 0x64 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangelogEntry(ChangelogEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangelogEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangelogEntry(ChangelogEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ChangelogEntry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ChangelogEntry, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ChangelogEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ChangelogEntry*, "UnityEngine.ProBuilder", "ChangelogEntry");
