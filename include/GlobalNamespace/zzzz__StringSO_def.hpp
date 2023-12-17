#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObservableVariableSO_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringSO)
// Forward declare root types
namespace GlobalNamespace {
class StringSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringSO);
// Type: ::StringSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15869)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15869), inst: 397 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15872))
// CS Name: ::StringSO*
class CORDL_TYPE StringSO : public ::GlobalNamespace::ObservableVariableSO_1<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::ObservableVariableSO_1<::StringW>)]{};

static inline ::GlobalNamespace::StringSO* New_ctor() ;

/// @brief Method .ctor addr 0xe28a90 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "StringSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StringSO(StringSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StringSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StringSO(StringSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StringSO()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringSO*, "", "StringSO");
