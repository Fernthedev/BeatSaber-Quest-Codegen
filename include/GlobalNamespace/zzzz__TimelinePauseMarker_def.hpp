#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
CORDL_MODULE_EXPORT(TimelinePauseMarker)
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace GlobalNamespace {
class TimelinePauseMarker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TimelinePauseMarker);
// Type: ::TimelinePauseMarker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14406))
// CS Name: ::TimelinePauseMarker*
class CORDL_TYPE TimelinePauseMarker : public ::UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Timeline::Marker)]{};

/// @brief Field <id>k__BackingField offset 0x28
 __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField)) ::UnityEngine::PropertyName  _id_k__BackingField;

 __declspec(property(get=get_id)) ::UnityEngine::PropertyName  id;

/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr operator  ::UnityEngine::Playables::INotification*() noexcept;

constexpr void __set__id_k__BackingField(::UnityEngine::PropertyName  value) ;

constexpr ::UnityEngine::PropertyName& __get__id_k__BackingField() ;

constexpr ::UnityEngine::PropertyName const& __get__id_k__BackingField() const;

/// @brief Method get_id addr 0x20f5d1c size 0x8 virtual true final true
inline ::UnityEngine::PropertyName get_id() ;

static inline ::GlobalNamespace::TimelinePauseMarker* New_ctor() ;

/// @brief Method .ctor addr 0x20f5d24 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimelinePauseMarker(TimelinePauseMarker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimelinePauseMarker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimelinePauseMarker(TimelinePauseMarker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TimelinePauseMarker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TimelinePauseMarker, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TimelinePauseMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimelinePauseMarker*, "", "TimelinePauseMarker");
