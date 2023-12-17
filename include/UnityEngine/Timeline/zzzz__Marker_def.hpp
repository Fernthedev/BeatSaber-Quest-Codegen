#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Marker)
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class IMarker;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class Marker;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::Marker);
// Type: UnityEngine.Timeline::Marker
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13888))
// CS Name: ::UnityEngine.Timeline::Marker*
class CORDL_TYPE Marker : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::ScriptableObject)]{};

/// @brief Field m_Time offset 0x18
 __declspec(property(get=__get_m_Time, put=__set_m_Time)) double_t  m_Time;

/// @brief Field <parent>k__BackingField offset 0x20
 __declspec(property(get=__get__parent_k__BackingField, put=__set__parent_k__BackingField)) ::UnityEngine::Timeline::TrackAsset*  _parent_k__BackingField;

 __declspec(property(get=get_parent, put=set_parent)) ::UnityEngine::Timeline::TrackAsset*  parent;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

/// @brief Convert operator to "::UnityEngine::Timeline::IMarker"
constexpr operator  ::UnityEngine::Timeline::IMarker*() noexcept;

constexpr void __set_m_Time(double_t  value) ;

constexpr double_t& __get_m_Time() ;

constexpr double_t const& __get_m_Time() const;

constexpr void __set__parent_k__BackingField(::UnityEngine::Timeline::TrackAsset*  value) ;

constexpr ::UnityEngine::Timeline::TrackAsset* __get__parent_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TrackAsset*> __get__parent_k__BackingField() const;

/// @brief Method get_parent addr 0x2c68604 size 0x8 virtual true final true
inline ::UnityEngine::Timeline::TrackAsset* get_parent() ;

/// @brief Method set_parent addr 0x2c6860c size 0x8 virtual false final false
inline void set_parent(::UnityEngine::Timeline::TrackAsset*  value) ;

/// @brief Method get_time addr 0x2c68614 size 0x8 virtual true final true
inline double_t get_time() ;

/// @brief Method set_time addr 0x2c6861c size 0x70 virtual true final true
inline void set_time(double_t  value) ;

/// @brief Method UnityEngine.Timeline.IMarker.Initialize addr 0x2c6868c size 0x14c virtual true final true
inline void UnityEngine_Timeline_IMarker_Initialize(::UnityEngine::Timeline::TrackAsset*  parentTrack) ;

/// @brief Method OnInitialize addr 0x2c687d8 size 0x4 virtual true final false
inline void OnInitialize(::UnityEngine::Timeline::TrackAsset*  aPent) ;

static inline ::UnityEngine::Timeline::Marker* New_ctor() ;

/// @brief Method .ctor addr 0x2c687dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Marker(Marker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Marker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Marker(Marker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Marker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::Marker, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::Marker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::Marker*, "UnityEngine.Timeline", "Marker");
