#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DeterministicHitChanceScoreCalculator)
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
// Forward declare root types
namespace GlobalNamespace {
class DeterministicHitChanceScoreCalculator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DeterministicHitChanceScoreCalculator);
// Type: ::DeterministicHitChanceScoreCalculator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5169))
// CS Name: ::DeterministicHitChanceScoreCalculator*
class CORDL_TYPE DeterministicHitChanceScoreCalculator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field kScorePerHit offset 0x0
static constexpr int32_t  kScorePerHit{static_cast<int32_t>(0x69)};

/// @brief Field _hitChance offset 0x10
 __declspec(property(get=__get__hitChance, put=__set__hitChance)) float_t  _hitChance;

/// @brief Field _chanceAggregated offset 0x14
 __declspec(property(get=__get__chanceAggregated, put=__set__chanceAggregated)) float_t  _chanceAggregated;

/// @brief Convert operator to "::GlobalNamespace::IMockPlayerScoreCalculator"
constexpr operator  ::GlobalNamespace::IMockPlayerScoreCalculator*() noexcept;

constexpr void __set__hitChance(float_t  value) ;

constexpr float_t& __get__hitChance() ;

constexpr float_t const& __get__hitChance() const;

constexpr void __set__chanceAggregated(float_t  value) ;

constexpr float_t& __get__chanceAggregated() ;

constexpr float_t const& __get__chanceAggregated() const;

static inline ::GlobalNamespace::DeterministicHitChanceScoreCalculator* New_ctor(float_t  hitChance) ;

/// @brief Method .ctor addr 0x23ddfb8 size 0x28 virtual false final false
inline void _ctor(float_t  hitChance) ;

/// @brief Method GetScoreForNote addr 0x23ddfe0 size 0x30 virtual true final true
inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData*  noteData) ;

// Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeterministicHitChanceScoreCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeterministicHitChanceScoreCalculator(DeterministicHitChanceScoreCalculator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeterministicHitChanceScoreCalculator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DeterministicHitChanceScoreCalculator, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DeterministicHitChanceScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DeterministicHitChanceScoreCalculator*, "", "DeterministicHitChanceScoreCalculator");
