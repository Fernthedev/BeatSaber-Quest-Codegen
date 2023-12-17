#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticEventCollectorSingleton)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class __DiagnosticEventCollectorSingleton____c;
}
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Diagnostics {
class DiagnosticEventCollectorSingleton;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
class __DiagnosticEventCollectorSingleton____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c);
// Type: ::<>c
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14025))
// CS Name: ::DiagnosticEventCollectorSingleton::<>c*
class CORDL_TYPE __DiagnosticEventCollectorSingleton____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c*  value) ;

static inline ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* getStaticF___9() ;

static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent,int32_t>* getStaticF___9__8_0() ;

static inline void setStaticF___9__11_0(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

static inline ::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* getStaticF___9__11_0() ;

static inline ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c* New_ctor() ;

/// @brief Method .ctor addr 0x2bdc540 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <RegisterEventHandler>b__8_0 addr 0x2bdc548 size 0x8 virtual false final false
inline int32_t _RegisterEventHandler_b__8_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  evt) ;

/// @brief Method <Awake>b__11_0 addr 0x2bdc550 size 0x5c virtual false final false
inline void _Awake_b__11_0(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  diagnosticEvent) ;

// Ctor Parameters [CppParam { name: "", ty: "__DiagnosticEventCollectorSingleton____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__DiagnosticEventCollectorSingleton____c(__DiagnosticEventCollectorSingleton____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__DiagnosticEventCollectorSingleton____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__DiagnosticEventCollectorSingleton____c(__DiagnosticEventCollectorSingleton____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __DiagnosticEventCollectorSingleton____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__8_0

// Static field <>9__11_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Diagnostics
// Type: UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollectorSingleton
namespace UnityEngine::ResourceManagement::Diagnostics {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13966), inst: 1061 }), TypeDefinitionIndex(TypeDefinitionIndex(13966))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14026))
// CS Name: ::UnityEngine.ResourceManagement.Diagnostics::DiagnosticEventCollectorSingleton*
class CORDL_TYPE DiagnosticEventCollectorSingleton : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*> {
public:
// Declarations
using __c = ::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*>)]{};

/// @brief Field m_CreatedEvents offset 0x18
 __declspec(property(get=__get_m_CreatedEvents, put=__set_m_CreatedEvents)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  m_CreatedEvents;

/// @brief Field m_UnhandledEvents offset 0x20
 __declspec(property(get=__get_m_UnhandledEvents, put=__set_m_UnhandledEvents)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  m_UnhandledEvents;

/// @brief Field s_EventHandlers offset 0x28
 __declspec(property(get=__get_s_EventHandlers, put=__set_s_EventHandlers)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  s_EventHandlers;

/// @brief Field m_lastTickSent offset 0x30
 __declspec(property(get=__get_m_lastTickSent, put=__set_m_lastTickSent)) float_t  m_lastTickSent;

/// @brief Field m_lastFrame offset 0x34
 __declspec(property(get=__get_m_lastFrame, put=__set_m_lastFrame)) int32_t  m_lastFrame;

/// @brief Field fpsAvg offset 0x38
 __declspec(property(get=__get_fpsAvg, put=__set_fpsAvg)) float_t  fpsAvg;

static inline void setStaticF_s_editorConnectionGuid(::System::Guid  value) ;

static inline ::System::Guid getStaticF_s_editorConnectionGuid() ;

constexpr void __set_m_CreatedEvents(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_m_CreatedEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_m_CreatedEvents() const;

constexpr void __set_m_UnhandledEvents(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_m_UnhandledEvents() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_m_UnhandledEvents() const;

constexpr void __set_s_EventHandlers(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>* __get_s_EventHandlers() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*> __get_s_EventHandlers() const;

constexpr void __set_m_lastTickSent(float_t  value) ;

constexpr float_t& __get_m_lastTickSent() ;

constexpr float_t const& __get_m_lastTickSent() const;

constexpr void __set_m_lastFrame(int32_t  value) ;

constexpr int32_t& __get_m_lastFrame() ;

constexpr int32_t const& __get_m_lastFrame() const;

constexpr void __set_fpsAvg(float_t  value) ;

constexpr float_t& __get_fpsAvg() ;

constexpr float_t const& __get_fpsAvg() const;

/// @brief Method get_PlayerConnectionGuid addr 0x2bdb77c size 0xfc virtual false final false
static inline ::System::Guid get_PlayerConnectionGuid() ;

/// @brief Method GetGameObjectName addr 0x2bdb878 size 0x40 virtual true final false
inline ::StringW GetGameObjectName() ;

/// @brief Method RegisterEventHandler addr 0x2bdb8b8 size 0xbc virtual false final false
static inline bool RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  handler, bool  _cordl_register, bool  create) ;

/// @brief Method RegisterEventHandler addr 0x2bdb974 size 0x4dc virtual false final false
inline void RegisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  handler) ;

/// @brief Method UnregisterEventHandler addr 0x2bdbe50 size 0xa8 virtual false final false
inline void UnregisterEventHandler(::System::Action_1<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent>*  handler) ;

/// @brief Method PostEvent addr 0x2bdbef8 size 0x224 virtual false final false
inline void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent  diagnosticEvent) ;

/// @brief Method Awake addr 0x2bdc11c size 0xe4 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x2bdc200 size 0x1d8 virtual false final false
inline void Update() ;

static inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton* New_ctor() ;

/// @brief Method .ctor addr 0x2bdc3d8 size 0x104 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticEventCollectorSingleton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticEventCollectorSingleton(DiagnosticEventCollectorSingleton const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DiagnosticEventCollectorSingleton()  = default;
public:


// Fields

// Static field s_editorConnectionGuid


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Diagnostics
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollectorSingleton*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton");
NEED_NO_BOX(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Diagnostics::__DiagnosticEventCollectorSingleton____c*, "UnityEngine.ResourceManagement.Diagnostics", "DiagnosticEventCollectorSingleton/<>c");
