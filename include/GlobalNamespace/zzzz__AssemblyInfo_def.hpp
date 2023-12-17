#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyInfo)
// Forward declare root types
namespace GlobalNamespace {
class AssemblyInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssemblyInfo);
// Type: ::AssemblyInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1875))
// CS Name: ::AssemblyInfo*
class CORDL_TYPE AssemblyInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_version(::StringW  value) ;

static inline ::StringW getStaticF_version() ;

/// @brief Method get_Version addr 0x1187494 size 0x12c virtual false final false
static inline ::StringW get_Version() ;

static inline ::GlobalNamespace::AssemblyInfo* New_ctor() ;

/// @brief Method .ctor addr 0x1187608 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyInfo(AssemblyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyInfo(AssemblyInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyInfo()  = default;
public:


// Fields

// Static field version


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssemblyInfo, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssemblyInfo*, "", "AssemblyInfo");
