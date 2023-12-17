#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitWhile)
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitWhile;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitWhile);
// Type: UnityEngine::WaitWhile
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10228))
// CS Name: ::UnityEngine::WaitWhile*
class CORDL_TYPE WaitWhile : public ::UnityEngine::CustomYieldInstruction {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::CustomYieldInstruction)]{};

/// @brief Field m_Predicate offset 0x10
 __declspec(property(get=__get_m_Predicate, put=__set_m_Predicate)) ::System::Func_1<bool>*  m_Predicate;

 __declspec(property(get=get_keepWaiting)) bool  keepWaiting;

constexpr void __set_m_Predicate(::System::Func_1<bool>*  value) ;

constexpr ::System::Func_1<bool>* __get_m_Predicate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> __get_m_Predicate() const;

/// @brief Method get_keepWaiting addr 0x2cd361c size 0x24 virtual true final false
inline bool get_keepWaiting() ;

static inline ::UnityEngine::WaitWhile* New_ctor(::System::Func_1<bool>*  predicate) ;

/// @brief Method .ctor addr 0x2cd3640 size 0x28 virtual false final false
inline void _ctor(::System::Func_1<bool>*  predicate) ;

// Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitWhile(WaitWhile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitWhile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitWhile(WaitWhile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WaitWhile()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitWhile, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::WaitWhile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitWhile*, "UnityEngine", "WaitWhile");
