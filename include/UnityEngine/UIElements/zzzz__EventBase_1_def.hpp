#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase_1)
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class EventBase_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class EventBase_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventBase_1);
// Type: UnityEngine.UIElements::EventBase`1
// Type: UnityEngine.UIElements::EventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7180)), TypeDefinitionIndex(TypeDefinitionIndex(7179))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7180), inst: 2 })
// CS Name: ::UnityEngine.UIElements::EventBase`1<T>*
class CORDL_TYPE EventBase_1<T> : public ::UnityEngine::UIElements::EventBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::UIElements::EventBase)]{};

/// @brief Field m_RefCount offset 0x78
 __declspec(property(get=__get_m_RefCount, put=__set_m_RefCount)) int32_t  m_RefCount;

 __declspec(property(get=get_eventTypeId)) int64_t  eventTypeId;

static inline void setStaticF_s_TypeId(int64_t  value) ;

static inline int64_t getStaticF_s_TypeId() ;

static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<T>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<T>* getStaticF_s_Pool() ;

constexpr void __set_m_RefCount(int32_t  value) ;

constexpr int32_t& __get_m_RefCount() ;

constexpr int32_t const& __get_m_RefCount() const;

static inline ::UnityEngine::UIElements::EventBase_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method TypeId addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int64_t TypeId() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Init() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled() ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline T GetPooled(::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method ReleasePooled addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void ReleasePooled(T  evt) ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Acquire() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method get_eventTypeId addr 0x0 size 0xffffffffffffffff virtual true final false
inline int64_t get_eventTypeId() ;

// Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventBase_1(EventBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventBase_1(EventBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventBase_1()  = default;
public:


// Fields

// Static field s_TypeId

// Static field s_Pool


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventBase_1, "UnityEngine.UIElements", "EventBase`1");
