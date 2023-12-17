#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputStateHistory_1)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct __InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct __InputStateHistory_1__Enumerator;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct __InputStateHistory__RecordHeader;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
class InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct __InputStateHistory_1__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct __InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
struct __InputStateHistory_1__Enumerator<::UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
struct __InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator);
MARK_GEN_VAL_T(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record);
// Type: ::Enumerator
// Type: ::Record
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6575))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6575), inst: 3896 })
// CS Name: ::InputStateHistory`1::Enumerator<TValue>
struct CORDL_TYPE __InputStateHistory_1__Enumerator<::UnityEngine::InputSystem::LowLevel::TouchState> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_History offset 0x0
 __declspec(property(get=__get_m_History, put=__set_m_History)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_History;

/// @brief Field m_Index offset 0x8
 __declspec(property(get=__get_m_Index, put=__set_m_Index)) int32_t  m_Index;

 __declspec(property(get=get_Current)) ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

constexpr void __set_m_History(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* __get_m_History() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> __get_m_History() const;

constexpr void __set_m_Index(int32_t  value) ;

constexpr int32_t& __get_m_Index() ;

constexpr int32_t const& __get_m_Index() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  history) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "m_History", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __InputStateHistory_1__Enumerator(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_History, int32_t  m_Index) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputStateHistory_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputStateHistory_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::Record
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6576))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6576), inst: 3896 })
// CS Name: ::InputStateHistory`1::Record<TValue>
struct CORDL_TYPE __InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Owner offset 0x0
 __declspec(property(get=__get_m_Owner, put=__set_m_Owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_Owner;

/// @brief Field m_IndexPlusOne offset 0x8
 __declspec(property(get=__get_m_IndexPlusOne, put=__set_m_IndexPlusOne)) int32_t  m_IndexPlusOne;

/// @brief Field m_Version offset 0xc
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) uint32_t  m_Version;

 __declspec(property(get=get_header)) ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader>  header;

 __declspec(property(get=get_recordIndex)) int32_t  recordIndex;

 __declspec(property(get=get_valid)) bool  valid;

 __declspec(property(get=get_owner)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  owner;

 __declspec(property(get=get_index)) int32_t  index;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  control;

 __declspec(property(get=get_next)) ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  next;

 __declspec(property(get=get_previous)) ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  previous;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>*() ;

constexpr void __set_m_Owner(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* __get_m_Owner() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> __get_m_Owner() const;

constexpr void __set_m_IndexPlusOne(int32_t  value) ;

constexpr int32_t& __get_m_IndexPlusOne() ;

constexpr int32_t const& __get_m_IndexPlusOne() const;

constexpr void __set_m_Version(uint32_t  value) ;

constexpr uint32_t& __get_m_Version() ;

constexpr uint32_t const& __get_m_Version() const;

/// @brief Method get_header addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader> get_header() ;

/// @brief Method get_recordIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_recordIndex() ;

/// @brief Method get_valid addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_valid() ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* get_owner() ;

/// @brief Method get_index addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_index() ;

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual false final false
inline double_t get_time() ;

/// @brief Method get_control addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>* get_control() ;

/// @brief Method get_next addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> get_next() ;

/// @brief Method get_previous addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> get_previous() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  owner, int32_t  index, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::__InputStateHistory__RecordHeader>  header) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  owner, int32_t  index) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::TouchState ReadValue() ;

/// @brief Method GetUnsafeMemoryPtr addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtr() ;

/// @brief Method GetUnsafeMemoryPtrUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::cordl_internals::Ptr<void> GetUnsafeMemoryPtrUnchecked() ;

/// @brief Method GetUnsafeExtraMemoryPtr addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtr() ;

/// @brief Method GetUnsafeExtraMemoryPtrUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::cordl_internals::Ptr<void> GetUnsafeExtraMemoryPtrUnchecked() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CopyFrom(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  record) ;

/// @brief Method CheckValid addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CheckValid() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __InputStateHistory_1__Record(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  m_Owner, int32_t  m_IndexPlusOne, uint32_t  m_Version) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __InputStateHistory_1__Record(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __InputStateHistory_1__Record()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory`1
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6574)), TypeDefinitionIndex(TypeDefinitionIndex(6577))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6577), inst: 3896 })
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputStateHistory`1<TValue>*
class CORDL_TYPE InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState> : public ::UnityEngine::InputSystem::LowLevel::InputStateHistory {
public:
// Declarations
using Record = ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>;

using Enumerator = ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator<::UnityEngine::InputSystem::LowLevel::TouchState>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::InputSystem::LowLevel::InputStateHistory)]{};

 __declspec(property(get=get_Item, put=set_Item)) ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  Item[];

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>*() noexcept;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* New_ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Nullable_1<int32_t>  maxStateSizeInBytes) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* New_ctor(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  control) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  control) ;

static inline ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* New_ctor(::StringW  path) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::StringW  path) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Finalize() ;

/// @brief Method AddRecord addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> AddRecord(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  record) ;

/// @brief Method RecordStateChange addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> RecordStateChange(::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  control, ::UnityEngine::InputSystem::LowLevel::TouchState  value, double_t  time) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> get_Item(int32_t  index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Item(int32_t  index, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  value) ;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InputStateHistory_1(InputStateHistory_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputStateHistory_1(InputStateHistory_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InputStateHistory_1()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Record");
