#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlyingScoreSpawner)
namespace GlobalNamespace {
class __FlyingScoreEffect__Pool;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Forward declare root types
namespace GlobalNamespace {
struct __FlyingScoreSpawner__SpawnPosition;
}
namespace GlobalNamespace {
class FlyingScoreSpawner;
}
namespace GlobalNamespace {
class __FlyingScoreSpawner__InitData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition);
MARK_REF_PTR_T(::GlobalNamespace::FlyingScoreSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__FlyingScoreSpawner__InitData);
// Type: ::SpawnPosition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4887))
// CS Name: ::FlyingScoreSpawner::SpawnPosition
struct CORDL_TYPE __FlyingScoreSpawner__SpawnPosition : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped
enum struct ____FlyingScoreSpawner__SpawnPosition_Unwrapped : int32_t {
__E_Underground = static_cast<int32_t>(0x0),
__E_AboveGround = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Underground value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const Underground;

/// @brief Field AboveGround value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const AboveGround;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____FlyingScoreSpawner__SpawnPosition_Unwrapped () const noexcept {
return std::bit_cast<____FlyingScoreSpawner__SpawnPosition_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __FlyingScoreSpawner__SpawnPosition(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __FlyingScoreSpawner__SpawnPosition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __FlyingScoreSpawner__SpawnPosition()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4888))
// CS Name: ::FlyingScoreSpawner::InitData*
class CORDL_TYPE __FlyingScoreSpawner__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field spawnPosition offset 0x10
 __declspec(property(get=__get_spawnPosition, put=__set_spawnPosition)) ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  spawnPosition;

constexpr void __set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  value) ;

constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& __get_spawnPosition() ;

constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& __get_spawnPosition() const;

static inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  spawnPosition) ;

/// @brief Method .ctor addr 0x23a1dc8 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition  spawnPosition) ;

// Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlyingScoreSpawner__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlyingScoreSpawner__InitData(__FlyingScoreSpawner__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlyingScoreSpawner__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlyingScoreSpawner__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FlyingScoreSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4889))
// CS Name: ::FlyingScoreSpawner*
class CORDL_TYPE FlyingScoreSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__FlyingScoreSpawner__InitData;

using SpawnPosition = ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _flyingScoreEffectPool offset 0x18
 __declspec(property(get=__get__flyingScoreEffectPool, put=__set__flyingScoreEffectPool)) ::GlobalNamespace::__FlyingScoreEffect__Pool*  _flyingScoreEffectPool;

/// @brief Field _initData offset 0x20
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__FlyingScoreSpawner__InitData*  _initData;

/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr operator  ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

constexpr void __set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool*  value) ;

constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool* __get__flyingScoreEffectPool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> __get__flyingScoreEffectPool() const;

constexpr void __set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData*  value) ;

constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> __get__initData() const;

/// @brief Method SpawnFlyingScore addr 0x23a1a20 size 0x284 virtual false final false
inline void SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer*  cutScoreBuffer, ::UnityEngine::Color  color) ;

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x23a1ca4 size 0x11c virtual true final true
inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect*  flyingObjectEffect) ;

static inline ::GlobalNamespace::FlyingScoreSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23a1dc0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingScoreSpawner(FlyingScoreSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingScoreSpawner(FlyingScoreSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingScoreSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingScoreSpawner, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition, "", "FlyingScoreSpawner/SpawnPosition");
NEED_NO_BOX(::GlobalNamespace::FlyingScoreSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingScoreSpawner*, "", "FlyingScoreSpawner");
NEED_NO_BOX(::GlobalNamespace::__FlyingScoreSpawner__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlyingScoreSpawner__InitData*, "", "FlyingScoreSpawner/InitData");
