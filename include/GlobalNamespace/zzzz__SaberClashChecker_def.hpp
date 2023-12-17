#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SaberClashChecker)
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SaberClashChecker);
// Type: ::SaberClashChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5294))
// CS Name: ::SaberClashChecker*
class CORDL_TYPE SaberClashChecker : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field kMinDistanceToClash offset 0x0
static constexpr float_t  kMinDistanceToClash{0.08};

/// @brief Field kIgnoredTime offset 0x0
static constexpr float_t  kIgnoredTime{0.1};

/// @brief Field _sabersAreClashing offset 0x10
 __declspec(property(get=__get__sabersAreClashing, put=__set__sabersAreClashing)) bool  _sabersAreClashing;

/// @brief Field _clashingPoint offset 0x14
 __declspec(property(get=__get__clashingPoint, put=__set__clashingPoint)) ::UnityEngine::Vector3  _clashingPoint;

/// @brief Field _leftSaber offset 0x20
 __declspec(property(get=__get__leftSaber, put=__set__leftSaber)) ::GlobalNamespace::Saber*  _leftSaber;

/// @brief Field _rightSaber offset 0x28
 __declspec(property(get=__get__rightSaber, put=__set__rightSaber)) ::GlobalNamespace::Saber*  _rightSaber;

/// @brief Field _prevGetFrameNum offset 0x30
 __declspec(property(get=__get__prevGetFrameNum, put=__set__prevGetFrameNum)) int32_t  _prevGetFrameNum;

constexpr void __set__sabersAreClashing(bool  value) ;

constexpr bool& __get__sabersAreClashing() ;

constexpr bool const& __get__sabersAreClashing() const;

constexpr void __set__clashingPoint(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__clashingPoint() ;

constexpr ::UnityEngine::Vector3 const& __get__clashingPoint() const;

constexpr void __set__leftSaber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__leftSaber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__leftSaber() const;

constexpr void __set__rightSaber(::GlobalNamespace::Saber*  value) ;

constexpr ::GlobalNamespace::Saber* __get__rightSaber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Saber*> __get__rightSaber() const;

constexpr void __set__prevGetFrameNum(int32_t  value) ;

constexpr int32_t& __get__prevGetFrameNum() ;

constexpr int32_t const& __get__prevGetFrameNum() const;

/// @brief Method Init addr 0x2263c04 size 0x1c virtual false final false
inline void Init(::GlobalNamespace::SaberManager*  saberManager) ;

/// @brief Method AreSabersClashing addr 0x225f95c size 0x164 virtual false final false
inline bool AreSabersClashing(ByRef<::UnityEngine::Vector3>  clashingPoint) ;

/// @brief Method SegmentToSegmentDist addr 0x2263c20 size 0x268 virtual false final false
inline float_t SegmentToSegmentDist(::UnityEngine::Vector3  fromA, ::UnityEngine::Vector3  toA, ::UnityEngine::Vector3  fromB, ::UnityEngine::Vector3  toB, ByRef<::UnityEngine::Vector3>  inbetweenPoint) ;

static inline ::GlobalNamespace::SaberClashChecker* New_ctor() ;

/// @brief Method .ctor addr 0x2263e88 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SaberClashChecker(SaberClashChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SaberClashChecker(SaberClashChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SaberClashChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SaberClashChecker, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SaberClashChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberClashChecker*, "", "SaberClashChecker");
