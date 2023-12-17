#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Changelog)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
class ChangelogEntry;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Changelog;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Changelog);
// Type: UnityEngine.ProBuilder::Changelog
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12108))
// CS Name: ::UnityEngine.ProBuilder::Changelog*
class CORDL_TYPE Changelog : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field k_ChangelogEntryPattern offset 0x0
static constexpr ::ConstString  k_ChangelogEntryPattern{u"(##\\s\\[[0-9]+\\.[0-9]+\\.[0-9]+(\\-[a-zA-Z]+(\\.[0-9]+)*)*\\])"};

/// @brief Field k_VersionInfoPattern offset 0x0
static constexpr ::ConstString  k_VersionInfoPattern{u"(?<=##\\s\\[).*(?=\\])"};

/// @brief Field k_VersionDatePattern offset 0x0
static constexpr ::ConstString  k_VersionDatePattern{u"(?<=##\\s\\[.*\\]\\s-\\s)[0-9-]*"};

/// @brief Field m_Entries offset 0x10
 __declspec(property(get=__get_m_Entries, put=__set_m_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*  m_Entries;

 __declspec(property(get=get_entries)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>*  entries;

constexpr void __set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>* __get_m_Entries() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::ChangelogEntry*>*> __get_m_Entries() const;

/// @brief Method get_entries addr 0x2b3bd1c size 0x7c virtual false final false
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::ChangelogEntry*>* get_entries() ;

static inline ::UnityEngine::ProBuilder::Changelog* New_ctor(::StringW  log) ;

/// @brief Method .ctor addr 0x2b3bd98 size 0x30c virtual false final false
inline void _ctor(::StringW  log) ;

/// @brief Method CreateEntry addr 0x2b3c0a4 size 0x170 virtual false final false
inline ::UnityEngine::ProBuilder::ChangelogEntry* CreateEntry(::StringW  version, ::StringW  contents) ;

// Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Changelog(Changelog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Changelog", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Changelog(Changelog const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Changelog()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Changelog, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Changelog);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Changelog*, "UnityEngine.ProBuilder", "Changelog");
