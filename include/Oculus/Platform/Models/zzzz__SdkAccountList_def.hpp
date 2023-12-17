#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccount_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SdkAccountList)
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SdkAccountList);
// Type: Oculus.Platform.Models::SdkAccountList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1183 }), TypeDefinitionIndex(TypeDefinitionIndex(13430)), TypeDefinitionIndex(TypeDefinitionIndex(13478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13479))
// CS Name: ::Oculus.Platform.Models::SdkAccountList*
class CORDL_TYPE SdkAccountList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::SdkAccount*>)]{};

static inline ::Oculus::Platform::Models::SdkAccountList* New_ctor(::cordl_internals::intptr_t  a) ;

/// @brief Method .ctor addr 0x2708bd4 size 0x23c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  a) ;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SdkAccountList(SdkAccountList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccountList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SdkAccountList(SdkAccountList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SdkAccountList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SdkAccountList, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccountList*, "Oculus.Platform.Models", "SdkAccountList");
