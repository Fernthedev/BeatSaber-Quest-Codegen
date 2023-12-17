#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextUtilities)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace TMPro {
struct __TMP_TextUtilities__LineSegment;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct CaretPosition;
}
// Forward declare root types
namespace TMPro {
class TMP_TextUtilities;
}
namespace TMPro {
struct __TMP_TextUtilities__LineSegment;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_TextUtilities);
MARK_VAL_T(::TMPro::__TMP_TextUtilities__LineSegment);
// Type: ::LineSegment
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12456))
// CS Name: ::TMP_TextUtilities::LineSegment
struct CORDL_TYPE __TMP_TextUtilities__LineSegment : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Point1 offset 0x0
 __declspec(property(get=__get_Point1, put=__set_Point1)) ::UnityEngine::Vector3  Point1;

/// @brief Field Point2 offset 0xc
 __declspec(property(get=__get_Point2, put=__set_Point2)) ::UnityEngine::Vector3  Point2;

constexpr void __set_Point1(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_Point1() ;

constexpr ::UnityEngine::Vector3 const& __get_Point1() const;

constexpr void __set_Point2(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_Point2() ;

constexpr ::UnityEngine::Vector3 const& __get_Point2() const;

/// @brief Method .ctor addr 0x2c4ce10 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2) ;

// Ctor Parameters [CppParam { name: "Point1", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Point2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr __TMP_TextUtilities__LineSegment(::UnityEngine::Vector3  Point1, ::UnityEngine::Vector3  Point2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TMP_TextUtilities__LineSegment(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TMP_TextUtilities__LineSegment()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_TextUtilities__LineSegment, 0x18>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TMP_TextUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12457))
// CS Name: ::TMPro::TMP_TextUtilities*
class CORDL_TYPE TMP_TextUtilities : public ::System::Object {
public:
// Declarations
using LineSegment = ::TMPro::__TMP_TextUtilities__LineSegment;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field k_lookupStringL offset 0x0
static constexpr ::ConstString  k_lookupStringL{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-"};

/// @brief Field k_lookupStringU offset 0x0
static constexpr ::ConstString  k_lookupStringU{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-"};

static inline void setStaticF_m_rectWorldCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

static inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> getStaticF_m_rectWorldCorners() ;

/// @brief Method GetCursorIndexFromPosition addr 0x2c49088 size 0x164 virtual false final false
static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method GetCursorIndexFromPosition addr 0x2c49724 size 0x1e0 virtual false final false
static inline int32_t GetCursorIndexFromPosition(::TMPro::TMP_Text*  textComponent, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, ByRef<::TMPro::CaretPosition>  cursor) ;

/// @brief Method FindNearestLine addr 0x2c49904 size 0x180 virtual false final false
static inline int32_t FindNearestLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestCharacterOnLine addr 0x2c49a84 size 0x378 virtual false final false
static inline int32_t FindNearestCharacterOnLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, int32_t  line, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method IsIntersectingRectTransform addr 0x2c49f84 size 0x11c virtual false final false
static inline bool IsIntersectingRectTransform(::UnityEngine::RectTransform*  rectTransform, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindIntersectingCharacter addr 0x2c4a0a0 size 0x20c virtual false final false
static inline int32_t FindIntersectingCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method FindNearestCharacter addr 0x2c491ec size 0x33c virtual false final false
static inline int32_t FindNearestCharacter(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera, bool  visibleOnly) ;

/// @brief Method FindIntersectingWord addr 0x2c4a2ac size 0x414 virtual false final false
static inline int32_t FindIntersectingWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestWord addr 0x2c4a6c0 size 0x5c8 virtual false final false
static inline int32_t FindNearestWord(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindIntersectingLine addr 0x2c4ac88 size 0x158 virtual false final false
static inline int32_t FindIntersectingLine(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindIntersectingLink addr 0x2c4ade0 size 0x33c virtual false final false
static inline int32_t FindIntersectingLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method FindNearestLink addr 0x2c4b11c size 0x71c virtual false final false
static inline int32_t FindNearestLink(::TMPro::TMP_Text*  text, ::UnityEngine::Vector3  position, ::UnityEngine::Camera*  camera) ;

/// @brief Method PointIntersectRectangle addr 0x2c49dfc size 0xc0 virtual false final false
static inline bool PointIntersectRectangle(::UnityEngine::Vector3  m, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  d) ;

/// @brief Method ScreenPointToWorldPointInRectangle addr 0x2c49528 size 0x1fc virtual false final false
static inline bool ScreenPointToWorldPointInRectangle(::UnityEngine::Transform*  transform, ::UnityEngine::Vector2  screenPoint, ::UnityEngine::Camera*  cam, ByRef<::UnityEngine::Vector3>  worldPoint) ;

/// @brief Method IntersectLinePlane addr 0x2c4b838 size 0x16c virtual false final false
static inline bool IntersectLinePlane(::TMPro::__TMP_TextUtilities__LineSegment  line, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal, ByRef<::UnityEngine::Vector3>  intersectingPoint) ;

/// @brief Method DistanceToLine addr 0x2c49ebc size 0xc8 virtual false final false
static inline float_t DistanceToLine(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  point) ;

/// @brief Method ToLowerFast addr 0x2c4b9a4 size 0x74 virtual false final false
static inline char16_t ToLowerFast(char16_t  c) ;

/// @brief Method ToUpperFast addr 0x2c4ba18 size 0x74 virtual false final false
static inline char16_t ToUpperFast(char16_t  c) ;

/// @brief Method ToUpperASCIIFast addr 0x2c4ba8c size 0x74 virtual false final false
static inline uint32_t ToUpperASCIIFast(uint32_t  c) ;

/// @brief Method GetHashCode addr 0x2c4bb00 size 0xbc virtual false final false
static inline int32_t GetHashCode(::StringW  s) ;

/// @brief Method GetSimpleHashCode addr 0x2c4395c size 0x6c virtual false final false
static inline int32_t GetSimpleHashCode(::StringW  s) ;

/// @brief Method GetSimpleHashCodeLowercase addr 0x2c4bbbc size 0xbc virtual false final false
static inline uint32_t GetSimpleHashCodeLowercase(::StringW  s) ;

/// @brief Method HexToInt addr 0x2c4bc78 size 0x2c virtual false final false
static inline int32_t HexToInt(char16_t  hex) ;

/// @brief Method StringHexToInt addr 0x2c4bca4 size 0x104 virtual false final false
static inline int32_t StringHexToInt(::StringW  s) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_TextUtilities(TMP_TextUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_TextUtilities(TMP_TextUtilities const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_TextUtilities()  = default;
public:


// Fields

// Static field m_rectWorldCorners


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextUtilities, 0x10>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextUtilities*, "TMPro", "TMP_TextUtilities");
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_TextUtilities__LineSegment, "TMPro", "TMP_TextUtilities/LineSegment");
