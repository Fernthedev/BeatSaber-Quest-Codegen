#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockLevelEndActions)
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockLevelEndActions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockLevelEndActions);
// Type: ::MockLevelEndActions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5022))
// CS Name: ::MockLevelEndActions*
class CORDL_TYPE MockLevelEndActions : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field levelFailedEvent offset 0x10
 __declspec(property(get=__get_levelFailedEvent, put=__set_levelFailedEvent)) ::System::Action*  levelFailedEvent;

/// @brief Field levelFinishedEvent offset 0x18
 __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent)) ::System::Action*  levelFinishedEvent;

/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr operator  ::GlobalNamespace::ILevelEndActions*() noexcept;

constexpr void __set_levelFailedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelFailedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelFailedEvent() const;

constexpr void __set_levelFinishedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_levelFinishedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_levelFinishedEvent() const;

/// @brief Method add_levelFailedEvent addr 0x23bcbbc size 0x9c virtual true final true
inline void add_levelFailedEvent(::System::Action*  value) ;

/// @brief Method remove_levelFailedEvent addr 0x23bcc58 size 0x9c virtual true final true
inline void remove_levelFailedEvent(::System::Action*  value) ;

/// @brief Method add_levelFinishedEvent addr 0x23bccf4 size 0x9c virtual true final true
inline void add_levelFinishedEvent(::System::Action*  value) ;

/// @brief Method remove_levelFinishedEvent addr 0x23bcd90 size 0x9c virtual true final true
inline void remove_levelFinishedEvent(::System::Action*  value) ;

static inline ::GlobalNamespace::MockLevelEndActions* New_ctor() ;

/// @brief Method .ctor addr 0x23bce2c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockLevelEndActions(MockLevelEndActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockLevelEndActions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockLevelEndActions(MockLevelEndActions const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockLevelEndActions()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockLevelEndActions, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockLevelEndActions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockLevelEndActions*, "", "MockLevelEndActions");
