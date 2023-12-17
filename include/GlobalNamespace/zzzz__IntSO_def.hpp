#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntSO)
// Forward declare root types
namespace GlobalNamespace {
class IntSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntSO);
// Type: ::IntSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 98 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15865))
// CS Name: ::IntSO*
class CORDL_TYPE IntSO : public ::GlobalNamespace::ObservableVariableSO_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::ObservableVariableSO_1<int32_t>)]{};

static inline ::GlobalNamespace::IntSO* New_ctor() ;

/// @brief Method .ctor addr 0xe28a30 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntSO(IntSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntSO(IntSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntSO*, "", "IntSO");
