#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Timeline/zzzz__Marker_def.hpp"
CORDL_MODULE_EXPORT(JumpMarker)
namespace UnityEngine::Playables {
class INotification;
}
namespace UnityEngine {
struct PropertyName;
}
namespace GlobalNamespace {
class JumpDestinationMarker;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpMarker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpMarker);
// Type: ::JumpMarker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13888))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14404))
// CS Name: ::JumpMarker*
class CORDL_TYPE JumpMarker : public ::UnityEngine::Timeline::Marker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::Timeline::Marker)]{};

/// @brief Field _destination offset 0x28
 __declspec(property(get=__get__destination, put=__set__destination)) ::GlobalNamespace::JumpDestinationMarker*  _destination;

/// @brief Field <id>k__BackingField offset 0x30
 __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField)) ::UnityEngine::PropertyName  _id_k__BackingField;

 __declspec(property(get=get_id)) ::UnityEngine::PropertyName  id;

 __declspec(property(get=get_jumpDestination)) ::GlobalNamespace::JumpDestinationMarker*  jumpDestination;

/// @brief Convert operator to "::UnityEngine::Playables::INotification"
constexpr operator  ::UnityEngine::Playables::INotification*() noexcept;

constexpr void __set__destination(::GlobalNamespace::JumpDestinationMarker*  value) ;

constexpr ::GlobalNamespace::JumpDestinationMarker* __get__destination() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JumpDestinationMarker*> __get__destination() const;

constexpr void __set__id_k__BackingField(::UnityEngine::PropertyName  value) ;

constexpr ::UnityEngine::PropertyName& __get__id_k__BackingField() ;

constexpr ::UnityEngine::PropertyName const& __get__id_k__BackingField() const;

/// @brief Method get_id addr 0x20f5ba8 size 0x8 virtual true final true
inline ::UnityEngine::PropertyName get_id() ;

/// @brief Method get_jumpDestination addr 0x20f5bb0 size 0x8 virtual false final false
inline ::GlobalNamespace::JumpDestinationMarker* get_jumpDestination() ;

static inline ::GlobalNamespace::JumpMarker* New_ctor() ;

/// @brief Method .ctor addr 0x20f5bb8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JumpMarker(JumpMarker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JumpMarker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JumpMarker(JumpMarker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JumpMarker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpMarker, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpMarker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpMarker*, "", "JumpMarker");
