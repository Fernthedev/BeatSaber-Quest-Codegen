#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchHistory)
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class __TouchHistory__Enumerator;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class __TouchHistory__Enumerator;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory);
// Type: ::Enumerator
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6420))
// CS Name: ::TouchHistory::Enumerator*
class CORDL_TYPE __TouchHistory__Enumerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field m_Owner offset 0x10
 __declspec(property(get=__get_m_Owner, put=__set_m_Owner)) ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  m_Owner;

/// @brief Field m_Index offset 0x30
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::EnhancedTouch::Touch  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_Owner(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory& __get_m_Owner() ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory const& __get_m_Owner() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

static inline ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator* New_ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  owner) ;

/// @brief Method .ctor addr 0x2ae389c size 0x34 virtual false final false
inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  owner) ;

/// @brief Method MoveNext addr 0x2ae3ab4 size 0x2c virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x2ae3ae0 size 0xc virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x2ae3aec size 0x40 virtual true final true
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ae3b2c size 0x7c virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2ae3ba8 size 0x4 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "__TouchHistory__Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TouchHistory__Enumerator(__TouchHistory__Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TouchHistory__Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TouchHistory__Enumerator(__TouchHistory__Enumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TouchHistory__Enumerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: UnityEngine.InputSystem.EnhancedTouch::TouchHistory
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6421))
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::TouchHistory
struct CORDL_TYPE TouchHistory : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Enumerator = ::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_History offset 0x0
 __declspec(property(get=__get_m_History, put=__set_m_History)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_History;

/// @brief Field m_Finger offset 0x8
 __declspec(property(get=__get_m_Finger, put=__set_m_Finger)) ::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger;

/// @brief Field m_Count offset 0x10
 __declspec(property(get=__get_m_Count, put=__set_m_Count)) int32_t  m_Count;

/// @brief Field m_StartIndex offset 0x14
 __declspec(property(get=__get_m_StartIndex, put=__set_m_StartIndex)) int32_t  m_StartIndex;

/// @brief Field m_Version offset 0x18
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) uint32_t  m_Version;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::InputSystem::EnhancedTouch::Touch  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

constexpr void __set_m_History(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* __get_m_History() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> __get_m_History() const;

constexpr void __set_m_Finger(::UnityEngine::InputSystem::EnhancedTouch::Finger*  value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::Finger* __get_m_Finger() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::EnhancedTouch::Finger*> __get_m_Finger() const;

constexpr void __set_m_Count(int32_t  value) ;

constexpr int32_t& __get_m_Count() ;

constexpr int32_t const& __get_m_Count() const;

constexpr void __set_m_StartIndex(int32_t  value) ;

constexpr int32_t& __get_m_StartIndex() ;

constexpr int32_t const& __get_m_StartIndex() const;

constexpr void __set_m_Version(uint32_t  value) ;

constexpr uint32_t& __get_m_Version() ;

constexpr uint32_t const& __get_m_Version() const;

/// @brief Method .ctor addr 0x2ae0e10 size 0x3c virtual false final false
inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  history, int32_t  startIndex, int32_t  count) ;

/// @brief Method GetEnumerator addr 0x2ae381c size 0x80 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2ae38d0 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x2ae38d4 size 0x8 virtual true final true
inline int32_t get_Count() ;

/// @brief Method get_Item addr 0x2ae38dc size 0x13c virtual true final true
inline ::UnityEngine::InputSystem::EnhancedTouch::Touch get_Item(int32_t  index) ;

/// @brief Method CheckValid addr 0x2ae3a18 size 0x9c virtual false final false
inline void CheckValid() ;

// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }, CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr TouchHistory(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_History, ::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger, int32_t  m_Count, int32_t  m_StartIndex, uint32_t  m_Version) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchHistory(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchHistory()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__TouchHistory__Enumerator*, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::TouchHistory, "UnityEngine.InputSystem.EnhancedTouch", "TouchHistory");
