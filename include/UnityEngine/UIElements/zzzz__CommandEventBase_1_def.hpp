#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandEventBase_1)
namespace UnityEngine::UIElements {
class ICommandEvent;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class CommandEventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class CommandEventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::CommandEventBase_1);
// Type: UnityEngine.UIElements::CommandEventBase`1
// Type: UnityEngine.UIElements::CommandEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), TypeDefinitionIndex(TypeDefinitionIndex(7229)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 1027 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7229), inst: 2 })
// CS Name: ::UnityEngine.UIElements::CommandEventBase`1<T>*
class CORDL_TYPE CommandEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::UIElements::EventBase_1<T>)]{};

/// @brief Field m_CommandName offset 0x80
 __declspec(property(get=__get_m_CommandName, put=__set_m_CommandName)) ::StringW  m_CommandName;

 __declspec(property(get=get_commandName, put=set_commandName)) ::StringW  commandName;

/// @brief Convert operator to "::UnityEngine::UIElements::ICommandEvent"
constexpr operator  ::UnityEngine::UIElements::ICommandEvent*() noexcept;

constexpr void __set_m_CommandName(::StringW  value) ;

constexpr ::StringW& __get_m_CommandName() ;

constexpr ::StringW const& __get_m_CommandName() const;

/// @brief Method get_commandName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW get_commandName() ;

/// @brief Method set_commandName addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_commandName(::StringW  value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
inline void LocalInit() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::Event*  systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::StringW  commandName) ;

static inline ::UnityEngine::UIElements::CommandEventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandEventBase_1(CommandEventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandEventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandEventBase_1(CommandEventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CommandEventBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::CommandEventBase_1, "UnityEngine.UIElements", "CommandEventBase`1");
