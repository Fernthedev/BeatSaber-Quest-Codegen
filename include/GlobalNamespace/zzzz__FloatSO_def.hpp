#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatSO)
// Forward declare root types
namespace GlobalNamespace {
class FloatSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatSO);
// Type: ::FloatSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 391 }), TypeDefinitionIndex(TypeDefinitionIndex(15869))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15864))
// CS Name: ::FloatSO*
class CORDL_TYPE FloatSO : public ::GlobalNamespace::ObservableVariableSO_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::ObservableVariableSO_1<float_t>)]{};

static inline ::GlobalNamespace::FloatSO* New_ctor() ;

/// @brief Method .ctor addr 0xe289e8 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatSO(FloatSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatSO(FloatSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloatSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatSO*, "", "FloatSO");
