#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreMultiplierCounter)
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType);
MARK_REF_PTR_T(::GlobalNamespace::ScoreMultiplierCounter);
// Type: ::MultiplierEventType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5320))
// CS Name: ::ScoreMultiplierCounter::MultiplierEventType
struct CORDL_TYPE __ScoreMultiplierCounter__MultiplierEventType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ScoreMultiplierCounter__MultiplierEventType_Unwrapped
enum struct ____ScoreMultiplierCounter__MultiplierEventType_Unwrapped : int32_t {
__E_Positive = static_cast<int32_t>(0x0),
__E_Neutral = static_cast<int32_t>(0x1),
__E_Negative = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Positive value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const Positive;

/// @brief Field Neutral value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const Neutral;

/// @brief Field Negative value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType const Negative;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ScoreMultiplierCounter__MultiplierEventType_Unwrapped () const noexcept {
return std::bit_cast<____ScoreMultiplierCounter__MultiplierEventType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ScoreMultiplierCounter__MultiplierEventType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ScoreMultiplierCounter__MultiplierEventType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ScoreMultiplierCounter__MultiplierEventType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ScoreMultiplierCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5321))
// CS Name: ::ScoreMultiplierCounter*
class CORDL_TYPE ScoreMultiplierCounter : public ::System::Object {
public:
// Declarations
using MultiplierEventType = ::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _multiplier offset 0x10
 __declspec(property(get=__get__multiplier, put=__set__multiplier)) int32_t  _multiplier;

/// @brief Field _multiplierIncreaseProgress offset 0x14
 __declspec(property(get=__get__multiplierIncreaseProgress, put=__set__multiplierIncreaseProgress)) int32_t  _multiplierIncreaseProgress;

/// @brief Field _multiplierIncreaseMaxProgress offset 0x18
 __declspec(property(get=__get__multiplierIncreaseMaxProgress, put=__set__multiplierIncreaseMaxProgress)) int32_t  _multiplierIncreaseMaxProgress;

 __declspec(property(get=get_multiplier)) int32_t  multiplier;

 __declspec(property(get=get_normalizedProgress)) float_t  normalizedProgress;

constexpr void __set__multiplier(int32_t  value) ;

constexpr int32_t& __get__multiplier() ;

constexpr int32_t const& __get__multiplier() const;

constexpr void __set__multiplierIncreaseProgress(int32_t  value) ;

constexpr int32_t& __get__multiplierIncreaseProgress() ;

constexpr int32_t const& __get__multiplierIncreaseProgress() const;

constexpr void __set__multiplierIncreaseMaxProgress(int32_t  value) ;

constexpr int32_t& __get__multiplierIncreaseMaxProgress() ;

constexpr int32_t const& __get__multiplierIncreaseMaxProgress() const;

/// @brief Method get_multiplier addr 0x2267dbc size 0x8 virtual false final false
inline int32_t get_multiplier() ;

/// @brief Method get_normalizedProgress addr 0x2267570 size 0x14 virtual false final false
inline float_t get_normalizedProgress() ;

/// @brief Method Reset addr 0x2267dc4 size 0x18 virtual false final false
inline void Reset() ;

/// @brief Method ProcessMultiplierEvent addr 0x22674cc size 0x9c virtual false final false
inline bool ProcessMultiplierEvent(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType  multiplierEventType) ;

static inline ::GlobalNamespace::ScoreMultiplierCounter* New_ctor() ;

/// @brief Method .ctor addr 0x2267da4 size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScoreMultiplierCounter(ScoreMultiplierCounter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScoreMultiplierCounter(ScoreMultiplierCounter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScoreMultiplierCounter()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreMultiplierCounter, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ScoreMultiplierCounter__MultiplierEventType, "", "ScoreMultiplierCounter/MultiplierEventType");
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierCounter*, "", "ScoreMultiplierCounter");
