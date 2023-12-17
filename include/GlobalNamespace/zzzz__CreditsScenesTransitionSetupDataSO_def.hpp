#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(CreditsScenesTransitionSetupDataSO)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CreditsScenesTransitionSetupDataSO);
// Type: ::CreditsScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15414))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6062))
// CS Name: ::CreditsScenesTransitionSetupDataSO*
class CORDL_TYPE CreditsScenesTransitionSetupDataSO : public ::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::NoSetupDataSingleFixedSceneScenesTransitionSetupDataSO)]{};

/// @brief Field didFinishEvent offset 0x38
 __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*  didFinishEvent;

constexpr void __set_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>* __get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*> __get_didFinishEvent() const;

/// @brief Method add_didFinishEvent addr 0x231d0b8 size 0xb0 virtual false final false
inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*  value) ;

/// @brief Method remove_didFinishEvent addr 0x231d168 size 0xb0 virtual false final false
inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::CreditsScenesTransitionSetupDataSO*>*  value) ;

/// @brief Method Finish addr 0x231d218 size 0x20 virtual false final false
inline void Finish() ;

static inline ::GlobalNamespace::CreditsScenesTransitionSetupDataSO* New_ctor() ;

/// @brief Method .ctor addr 0x231d238 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CreditsScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CreditsScenesTransitionSetupDataSO(CreditsScenesTransitionSetupDataSO const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CreditsScenesTransitionSetupDataSO()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CreditsScenesTransitionSetupDataSO, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CreditsScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsScenesTransitionSetupDataSO*, "", "CreditsScenesTransitionSetupDataSO");
