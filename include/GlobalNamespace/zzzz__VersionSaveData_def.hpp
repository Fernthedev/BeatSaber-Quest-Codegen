#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionSaveData)
// Forward declare root types
namespace GlobalNamespace {
class VersionSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VersionSaveData);
// Type: ::VersionSaveData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4685))
// CS Name: ::VersionSaveData*
class CORDL_TYPE VersionSaveData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field version offset 0x10
 __declspec(property(get=__get_version, put=__set_version)) ::StringW  version;

constexpr void __set_version(::StringW  value) ;

constexpr ::StringW& __get_version() ;

constexpr ::StringW const& __get_version() const;

static inline ::GlobalNamespace::VersionSaveData* New_ctor() ;

/// @brief Method .ctor addr 0x237284c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionSaveData(VersionSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionSaveData(VersionSaveData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VersionSaveData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VersionSaveData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VersionSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionSaveData*, "", "VersionSaveData");
