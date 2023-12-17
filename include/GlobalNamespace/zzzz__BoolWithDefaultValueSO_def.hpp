#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
CORDL_MODULE_EXPORT(BoolWithDefaultValueSO)
// Forward declare root types
namespace GlobalNamespace {
class BoolWithDefaultValueSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolWithDefaultValueSO);
// Type: ::BoolWithDefaultValueSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15861))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15862))
// CS Name: ::BoolWithDefaultValueSO*
class CORDL_TYPE BoolWithDefaultValueSO : public ::GlobalNamespace::BoolSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::GlobalNamespace::BoolSO)]{};

/// @brief Field _defaultValue offset 0x21
 __declspec(property(get=__get__defaultValue, put=__set__defaultValue)) bool  _defaultValue;

constexpr void __set__defaultValue(bool  value) ;

constexpr bool& __get__defaultValue() ;

constexpr bool const& __get__defaultValue() const;

/// @brief Method OnEnable addr 0xe28934 size 0x68 virtual true final false
inline void OnEnable() ;

static inline ::GlobalNamespace::BoolWithDefaultValueSO* New_ctor() ;

/// @brief Method .ctor addr 0xe2899c size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BoolWithDefaultValueSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoolWithDefaultValueSO(BoolWithDefaultValueSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoolWithDefaultValueSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoolWithDefaultValueSO(BoolWithDefaultValueSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BoolWithDefaultValueSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolWithDefaultValueSO, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolWithDefaultValueSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolWithDefaultValueSO*, "", "BoolWithDefaultValueSO");
