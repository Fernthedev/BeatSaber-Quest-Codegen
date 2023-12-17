#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(JumpReceiver)
namespace UnityEngine::Playables {
class INotificationReceiver;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
class INotification;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class JumpReceiver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JumpReceiver);
// Type: ::JumpReceiver
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14405))
// CS Name: ::JumpReceiver*
class CORDL_TYPE JumpReceiver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field <jumpToDestinationValid>k__BackingField offset 0x18
 __declspec(property(get=__get__jumpToDestinationValid_k__BackingField, put=__set__jumpToDestinationValid_k__BackingField)) bool  _jumpToDestinationValid_k__BackingField;

 __declspec(property(get=get_jumpToDestinationValid, put=set_jumpToDestinationValid)) bool  jumpToDestinationValid;

/// @brief Convert operator to "::UnityEngine::Playables::INotificationReceiver"
constexpr operator  ::UnityEngine::Playables::INotificationReceiver*() noexcept;

constexpr void __set__jumpToDestinationValid_k__BackingField(bool  value) ;

constexpr bool& __get__jumpToDestinationValid_k__BackingField() ;

constexpr bool const& __get__jumpToDestinationValid_k__BackingField() const;

/// @brief Method get_jumpToDestinationValid addr 0x20f5bc0 size 0x8 virtual false final false
inline bool get_jumpToDestinationValid() ;

/// @brief Method set_jumpToDestinationValid addr 0x20f5bc8 size 0xc virtual false final false
inline void set_jumpToDestinationValid(bool  value) ;

/// @brief Method OnNotify addr 0x20f5bd4 size 0x140 virtual true final true
inline void OnNotify(::UnityEngine::Playables::Playable  origin, ::UnityEngine::Playables::INotification*  notification, ::System::Object*  context) ;

static inline ::GlobalNamespace::JumpReceiver* New_ctor() ;

/// @brief Method .ctor addr 0x20f5d14 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JumpReceiver(JumpReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JumpReceiver", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JumpReceiver(JumpReceiver const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JumpReceiver()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JumpReceiver, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JumpReceiver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JumpReceiver*, "", "JumpReceiver");
