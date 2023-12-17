#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockComboController)
namespace GlobalNamespace {
class IComboController;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockComboController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockComboController);
// Type: ::MockComboController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5317))
// CS Name: ::MockComboController*
class CORDL_TYPE MockComboController : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field comboDidChangeEvent offset 0x10
 __declspec(property(get=__get_comboDidChangeEvent, put=__set_comboDidChangeEvent)) ::System::Action_1<int32_t>*  comboDidChangeEvent;

/// @brief Field comboBreakingEventHappenedEvent offset 0x18
 __declspec(property(get=__get_comboBreakingEventHappenedEvent, put=__set_comboBreakingEventHappenedEvent)) ::System::Action*  comboBreakingEventHappenedEvent;

/// @brief Convert operator to "::GlobalNamespace::IComboController"
constexpr operator  ::GlobalNamespace::IComboController*() noexcept;

constexpr void __set_comboDidChangeEvent(::System::Action_1<int32_t>*  value) ;

constexpr ::System::Action_1<int32_t>* __get_comboDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> __get_comboDidChangeEvent() const;

constexpr void __set_comboBreakingEventHappenedEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_comboBreakingEventHappenedEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_comboBreakingEventHappenedEvent() const;

/// @brief Method add_comboDidChangeEvent addr 0x2266084 size 0xb0 virtual true final true
inline void add_comboDidChangeEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method remove_comboDidChangeEvent addr 0x2266134 size 0xb0 virtual true final true
inline void remove_comboDidChangeEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method add_comboBreakingEventHappenedEvent addr 0x22661e4 size 0x9c virtual true final true
inline void add_comboBreakingEventHappenedEvent(::System::Action*  value) ;

/// @brief Method remove_comboBreakingEventHappenedEvent addr 0x2266280 size 0x9c virtual true final true
inline void remove_comboBreakingEventHappenedEvent(::System::Action*  value) ;

static inline ::GlobalNamespace::MockComboController* New_ctor() ;

/// @brief Method .ctor addr 0x226631c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockComboController(MockComboController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockComboController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockComboController(MockComboController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MockComboController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockComboController, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockComboController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockComboController*, "", "MockComboController");
