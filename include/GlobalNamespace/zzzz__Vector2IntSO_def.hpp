#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
CORDL_MODULE_EXPORT(Vector2IntSO)
// Forward declare root types
namespace GlobalNamespace {
class Vector2IntSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector2IntSO);
// Type: ::Vector2IntSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 3377 }), TypeDefinitionIndex(TypeDefinitionIndex(15869)), TypeDefinitionIndex(TypeDefinitionIndex(10244))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15873))
// CS Name: ::Vector2IntSO*
class CORDL_TYPE Vector2IntSO : public ::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector2Int> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::ObservableVariableSO_1<::UnityEngine::Vector2Int>)]{};

static inline ::GlobalNamespace::Vector2IntSO* New_ctor() ;

/// @brief Method .ctor addr 0xe28ad8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2IntSO(Vector2IntSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2IntSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2IntSO(Vector2IntSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Vector2IntSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector2IntSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector2IntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector2IntSO*, "", "Vector2IntSO");
