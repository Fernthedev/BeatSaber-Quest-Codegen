#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrailElement)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TrailElement);
// Type: ::TrailElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4879))
// CS Name: ::TrailElement*
class CORDL_TYPE TrailElement : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field position offset 0x10
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field normal offset 0x1c
 __declspec(property(get=__get_normal, put=__set_normal)) ::UnityEngine::Vector3  normal;

/// @brief Field distance offset 0x28
 __declspec(property(get=__get_distance, put=__set_distance)) float_t  distance;

/// @brief Field localDistance offset 0x2c
 __declspec(property(get=__get_localDistance, put=__set_localDistance)) float_t  localDistance;

/// @brief Field time offset 0x30
 __declspec(property(get=__get_time, put=__set_time)) float_t  time;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_normal(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_normal() ;

constexpr ::UnityEngine::Vector3 const& __get_normal() const;

constexpr void __set_distance(float_t  value) ;

constexpr float_t& __get_distance() ;

constexpr float_t const& __get_distance() const;

constexpr void __set_localDistance(float_t  value) ;

constexpr float_t& __get_localDistance() ;

constexpr float_t const& __get_localDistance() const;

constexpr void __set_time(float_t  value) ;

constexpr float_t& __get_time() ;

constexpr float_t const& __get_time() const;

/// @brief Method SetData addr 0x23a0850 size 0x40 virtual false final false
inline void SetData(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  time) ;

/// @brief Method CopyFrom addr 0x23a0890 size 0x40 virtual false final false
inline void CopyFrom(::GlobalNamespace::TrailElement*  other) ;

/// @brief Method SetDistance addr 0x23a08d0 size 0x8 virtual false final false
inline void SetDistance(float_t  value) ;

/// @brief Method UpdateLocalDistance addr 0x23a08d8 size 0xa8 virtual false final false
inline void UpdateLocalDistance(::GlobalNamespace::TrailElement*  prev) ;

static inline ::GlobalNamespace::TrailElement* New_ctor() ;

/// @brief Method .ctor addr 0x23a0980 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrailElement(TrailElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrailElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrailElement(TrailElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrailElement()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TrailElement, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TrailElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrailElement*, "", "TrailElement");
