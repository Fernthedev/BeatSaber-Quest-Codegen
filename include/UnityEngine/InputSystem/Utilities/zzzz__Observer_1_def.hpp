#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Observer_1)
namespace System {
class Action;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
class Observer_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<::il2cpp_utils::il2cpp_reference_type TValue>
class Observer_1<TValue>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::Utilities::Observer_1);
// Type: UnityEngine.InputSystem.Utilities::Observer`1
// Type: UnityEngine.InputSystem.Utilities::Observer`1
namespace UnityEngine::InputSystem::Utilities {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6689)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6689), inst: 2 })
// CS Name: ::UnityEngine.InputSystem.Utilities::Observer`1<TValue>*
class CORDL_TYPE Observer_1<TValue> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_OnNext offset 0x10
 __declspec(property(get=__get_m_OnNext, put=__set_m_OnNext)) ::System::Action_1<TValue>*  m_OnNext;

/// @brief Field m_OnCompleted offset 0x18
 __declspec(property(get=__get_m_OnCompleted, put=__set_m_OnCompleted)) ::System::Action*  m_OnCompleted;

/// @brief Convert operator to "::System::IObserver_1<TValue>"
constexpr operator  ::System::IObserver_1<TValue>*() noexcept;

constexpr void __set_m_OnNext(::System::Action_1<TValue>*  value) ;

constexpr ::System::Action_1<TValue>* __get_m_OnNext() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TValue>*> __get_m_OnNext() const;

constexpr void __set_m_OnCompleted(::System::Action*  value) ;

constexpr ::System::Action* __get_m_OnCompleted() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_m_OnCompleted() const;

static inline ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>* New_ctor(::System::Action_1<TValue>*  onNext, ::System::Action*  onCompleted) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<TValue>*  onNext, ::System::Action*  onCompleted) ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted() ;

/// @brief Method OnError addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnError(::System::Exception*  error) ;

/// @brief Method OnNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnNext(TValue  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Observer_1(Observer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Observer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Observer_1(Observer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Observer_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::Utilities::Observer_1, "UnityEngine.InputSystem.Utilities", "Observer`1");
