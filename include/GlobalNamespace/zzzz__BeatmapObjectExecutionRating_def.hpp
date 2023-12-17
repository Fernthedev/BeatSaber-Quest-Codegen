#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BeatmapObjectExecutionRating)
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectExecutionRating;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectExecutionRating);
// Type: ::BeatmapObjectExecutionRating
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4135))
// CS Name: ::BeatmapObjectExecutionRating*
class CORDL_TYPE BeatmapObjectExecutionRating : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <time>k__BackingField offset 0x10
 __declspec(property(get=__get__time_k__BackingField, put=__set__time_k__BackingField)) float_t  _time_k__BackingField;

 __declspec(property(get=get_time)) float_t  time;

constexpr void __set__time_k__BackingField(float_t  value) ;

constexpr float_t& __get__time_k__BackingField() ;

constexpr float_t const& __get__time_k__BackingField() const;

/// @brief Method get_time addr 0x223bf8c size 0x8 virtual false final false
inline float_t get_time() ;

static inline ::GlobalNamespace::BeatmapObjectExecutionRating* New_ctor(float_t  time) ;

/// @brief Method .ctor addr 0x223bf94 size 0x28 virtual false final false
inline void _ctor(float_t  time) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapObjectExecutionRating(BeatmapObjectExecutionRating && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectExecutionRating", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapObjectExecutionRating(BeatmapObjectExecutionRating const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapObjectExecutionRating()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectExecutionRating, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectExecutionRating);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");
