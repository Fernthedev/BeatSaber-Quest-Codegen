#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Queue_1)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
struct __Queue_1__Enumerator;
}
namespace System::Collections {
class ICollection;
}
namespace GlobalNamespace {
struct __AveragingValueRecorder__AverageValueData;
}
namespace GlobalNamespace {
struct __MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData;
}
namespace GlobalNamespace {
struct __SongRunningHelper__QueuedSongParams;
}
namespace LiteNetLib {
struct __NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct __NatPunchModule__SuccessEventData;
}
namespace System {
struct DateTime;
}
namespace System {
struct Guid;
}
namespace UnityEngine::UIElements {
struct __EventDispatcher__EventRecord;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::System::DateTime>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class Queue_1<T>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<float_t>;
}
namespace System::Collections::Generic {
template<>
class Queue_1<int32_t>;
}
namespace System::Collections::Generic {
template<typename T>
struct __Queue_1__Enumerator;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__RequestEventData>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__SuccessEventData>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::System::DateTime>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::System::Guid>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__EventRecord>;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __Queue_1__Enumerator<T>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<float_t>;
}
namespace System::Collections::Generic {
template<>
struct __Queue_1__Enumerator<int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Queue_1);
MARK_GEN_VAL_T(::System::Collections::Generic::__Queue_1__Enumerator);
// Type: ::Enumerator
// Type: System.Collections.Generic::Queue`1
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4884 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData> : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  _currentElement;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  value) ;

constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData& __get__currentElement() ;

constexpr ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*  _q, int32_t  _version, int32_t  _index, ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4883 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__SuccessEventData> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::LiteNetLib::__NatPunchModule__SuccessEventData  _currentElement;

 __declspec(property(get=get_Current)) ::LiteNetLib::__NatPunchModule__SuccessEventData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__SuccessEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::LiteNetLib::__NatPunchModule__SuccessEventData  value) ;

constexpr ::LiteNetLib::__NatPunchModule__SuccessEventData& __get__currentElement() ;

constexpr ::LiteNetLib::__NatPunchModule__SuccessEventData const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::LiteNetLib::__NatPunchModule__SuccessEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::LiteNetLib::__NatPunchModule__SuccessEventData", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*  _q, int32_t  _version, int32_t  _index, ::LiteNetLib::__NatPunchModule__SuccessEventData  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4882 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__RequestEventData> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::LiteNetLib::__NatPunchModule__RequestEventData  _currentElement;

 __declspec(property(get=get_Current)) ::LiteNetLib::__NatPunchModule__RequestEventData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__RequestEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__RequestEventData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::LiteNetLib::__NatPunchModule__RequestEventData  value) ;

constexpr ::LiteNetLib::__NatPunchModule__RequestEventData& __get__currentElement() ;

constexpr ::LiteNetLib::__NatPunchModule__RequestEventData const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::LiteNetLib::__NatPunchModule__RequestEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::LiteNetLib::__NatPunchModule__RequestEventData", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*  _q, int32_t  _version, int32_t  _index, ::LiteNetLib::__NatPunchModule__RequestEventData  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4881 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  _currentElement;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  value) ;

constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData& __get__currentElement() ;

constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*  _q, int32_t  _version, int32_t  _index, ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4880 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__EventRecord> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::UnityEngine::UIElements::__EventDispatcher__EventRecord  _currentElement;

 __declspec(property(get=get_Current)) ::UnityEngine::UIElements::__EventDispatcher__EventRecord  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::UnityEngine::UIElements::__EventDispatcher__EventRecord  value) ;

constexpr ::UnityEngine::UIElements::__EventDispatcher__EventRecord& __get__currentElement() ;

constexpr ::UnityEngine::UIElements::__EventDispatcher__EventRecord const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::__EventDispatcher__EventRecord get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::UnityEngine::UIElements::__EventDispatcher__EventRecord", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*  _q, int32_t  _version, int32_t  _index, ::UnityEngine::UIElements::__EventDispatcher__EventRecord  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4879 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::GlobalNamespace::__AveragingValueRecorder__AverageValueData> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::GlobalNamespace::__AveragingValueRecorder__AverageValueData  _currentElement;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__AveragingValueRecorder__AverageValueData  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::GlobalNamespace::__AveragingValueRecorder__AverageValueData  value) ;

constexpr ::GlobalNamespace::__AveragingValueRecorder__AverageValueData& __get__currentElement() ;

constexpr ::GlobalNamespace::__AveragingValueRecorder__AverageValueData const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__AveragingValueRecorder__AverageValueData get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::__AveragingValueRecorder__AverageValueData", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*  _q, int32_t  _version, int32_t  _index, ::GlobalNamespace::__AveragingValueRecorder__AverageValueData  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 4780 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  _currentElement;

 __declspec(property(get=get_Current)) ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  value) ;

constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams& __get__currentElement() ;

constexpr ::GlobalNamespace::__SongRunningHelper__QueuedSongParams const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::GlobalNamespace::__SongRunningHelper__QueuedSongParams", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*  _q, int32_t  _version, int32_t  _index, ::GlobalNamespace::__SongRunningHelper__QueuedSongParams  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 2701 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::System::DateTime> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::System::DateTime>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::System::DateTime  _currentElement;

 __declspec(property(get=get_Current)) ::System::DateTime  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::DateTime>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::DateTime>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::System::DateTime>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::System::DateTime>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::DateTime>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::System::DateTime  value) ;

constexpr ::System::DateTime& __get__currentElement() ;

constexpr ::System::DateTime const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::System::DateTime>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::DateTime get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::System::DateTime>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::System::DateTime", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::System::DateTime>*  _q, int32_t  _version, int32_t  _index, ::System::DateTime  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 391 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<float_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<float_t>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) float_t  _currentElement;

 __declspec(property(get=get_Current)) float_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<float_t>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(float_t  value) ;

constexpr float_t& __get__currentElement() ;

constexpr float_t const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<float_t>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<float_t>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "float_t", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<float_t>*  _q, int32_t  _version, int32_t  _index, float_t  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 314 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<::System::Guid> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<::System::Guid>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) ::System::Guid  _currentElement;

 __declspec(property(get=get_Current)) ::System::Guid  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Guid>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<::System::Guid>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<::System::Guid>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::Guid>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(::System::Guid  value) ;

constexpr ::System::Guid& __get__currentElement() ;

constexpr ::System::Guid const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<::System::Guid>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Guid get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<::System::Guid>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<::System::Guid>*  _q, int32_t  _version, int32_t  _index, ::System::Guid  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 98 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<int32_t> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<int32_t>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) int32_t  _currentElement;

 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(int32_t  value) ;

constexpr int32_t& __get__currentElement() ;

constexpr int32_t const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<int32_t>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<int32_t>*  _q, int32_t  _version, int32_t  _index, int32_t  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: ::Enumerator
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3852))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3852), inst: 2 })
// CS Name: ::Queue`1::Enumerator<T>
struct CORDL_TYPE __Queue_1__Enumerator<T> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _q offset 0x0
 __declspec(property(get=__get__q, put=__set__q)) ::System::Collections::Generic::Queue_1<T>*  _q;

/// @brief Field _version offset 0x8
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _index offset 0xc
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

/// @brief Field _currentElement offset 0x10
 __declspec(property(get=__get__currentElement, put=__set__currentElement)) T  _currentElement;

 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

constexpr void __set__q(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr ::System::Collections::Generic::Queue_1<T>* __get__q() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> __get__q() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

constexpr void __set__currentElement(T  value) ;

constexpr T& __get__currentElement() ;

constexpr T const& __get__currentElement() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::Queue_1<T>*  q) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_Current() ;

/// @brief Method ThrowEnumerationNotStartedOrEnded addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowEnumerationNotStartedOrEnded() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

// Ctor Parameters [CppParam { name: "_q", ty: "::System::Collections::Generic::Queue_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_currentElement", ty: "T", modifiers: "", def_value: None }]
constexpr __Queue_1__Enumerator(::System::Collections::Generic::Queue_1<T>*  _q, int32_t  _version, int32_t  _index, T  _currentElement) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Queue_1__Enumerator(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Queue_1__Enumerator()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4884 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*() noexcept;

constexpr void __set__array(::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*>& __get__array() ;

constexpr ::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData,::Array<::GlobalNamespace::__OVRVirtualKeyboard__InteractorRootTransformOverride__InteractorRootOverrideData>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4883 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__SuccessEventData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::__NatPunchModule__SuccessEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::__NatPunchModule__SuccessEventData>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*() noexcept;

constexpr void __set__array(::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*>  value) ;

constexpr ::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*>& __get__array() ;

constexpr ::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::LiteNetLib::__NatPunchModule__SuccessEventData  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__SuccessEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::LiteNetLib::__NatPunchModule__SuccessEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::LiteNetLib::__NatPunchModule__SuccessEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::LiteNetLib::__NatPunchModule__SuccessEventData  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::LiteNetLib::__NatPunchModule__SuccessEventData,::Array<::LiteNetLib::__NatPunchModule__SuccessEventData>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4882 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__RequestEventData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::LiteNetLib::__NatPunchModule__RequestEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::LiteNetLib::__NatPunchModule__RequestEventData>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::__NatPunchModule__RequestEventData>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::LiteNetLib::__NatPunchModule__RequestEventData>*() noexcept;

constexpr void __set__array(::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*>  value) ;

constexpr ::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*>& __get__array() ;

constexpr ::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::LiteNetLib::__NatPunchModule__RequestEventData  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::LiteNetLib::__NatPunchModule__RequestEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::LiteNetLib::__NatPunchModule__RequestEventData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::LiteNetLib::__NatPunchModule__RequestEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::LiteNetLib::__NatPunchModule__RequestEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::LiteNetLib::__NatPunchModule__RequestEventData  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::LiteNetLib::__NatPunchModule__RequestEventData,::Array<::LiteNetLib::__NatPunchModule__RequestEventData>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4881 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*() noexcept;

constexpr void __set__array(::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*>& __get__array() ;

constexpr ::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData,::Array<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4880 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__EventRecord>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*() noexcept;

constexpr void __set__array(::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>& __get__array() ;

constexpr ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::UnityEngine::UIElements::__EventDispatcher__EventRecord  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::UnityEngine::UIElements::__EventDispatcher__EventRecord> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__EventDispatcher__EventRecord Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::UIElements::__EventDispatcher__EventRecord Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::UnityEngine::UIElements::__EventDispatcher__EventRecord  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::UnityEngine::UIElements::__EventDispatcher__EventRecord,::Array<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3853)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4879 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*() noexcept;

constexpr void __set__array(::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*>& __get__array() ;

constexpr ::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::GlobalNamespace::__AveragingValueRecorder__AverageValueData  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__AveragingValueRecorder__AverageValueData> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__AveragingValueRecorder__AverageValueData Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__AveragingValueRecorder__AverageValueData Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::GlobalNamespace::__AveragingValueRecorder__AverageValueData  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__AveragingValueRecorder__AverageValueData,::Array<::GlobalNamespace::__AveragingValueRecorder__AverageValueData>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3853)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 4780 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*() noexcept;

constexpr void __set__array(::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*>& __get__array() ;

constexpr ::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::GlobalNamespace::__SongRunningHelper__QueuedSongParams> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__SongRunningHelper__QueuedSongParams Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::GlobalNamespace::__SongRunningHelper__QueuedSongParams  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::GlobalNamespace::__SongRunningHelper__QueuedSongParams,::Array<::GlobalNamespace::__SongRunningHelper__QueuedSongParams>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3853)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 2701 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::System::DateTime> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::System::DateTime>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::DateTime>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::DateTime>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::DateTime>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::DateTime>*() noexcept;

constexpr void __set__array(::ArrayW<::System::DateTime,::Array<::System::DateTime>*>  value) ;

constexpr ::ArrayW<::System::DateTime,::Array<::System::DateTime>*>& __get__array() ;

constexpr ::ArrayW<::System::DateTime,::Array<::System::DateTime>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::System::DateTime>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::System::DateTime>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::System::DateTime  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::System::DateTime> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::DateTime>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTime Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::DateTime Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::System::DateTime  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::System::DateTime,::Array<::System::DateTime>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 391 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<float_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<float_t,::Array<float_t>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<float_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<float_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<float_t>*() noexcept;

constexpr void __set__array(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__array() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<float_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<float_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(float_t  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<float_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<float_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(float_t  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3853)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 314 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<::System::Guid> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<::System::Guid,::Array<::System::Guid>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Guid>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::System::Guid>*() noexcept;

constexpr void __set__array(::ArrayW<::System::Guid,::Array<::System::Guid>*>  value) ;

constexpr ::ArrayW<::System::Guid,::Array<::System::Guid>*>& __get__array() ;

constexpr ::ArrayW<::System::Guid,::Array<::System::Guid>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<::System::Guid>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<::System::Guid>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(::System::Guid  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<::System::Guid> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Guid>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(::System::Guid  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<::System::Guid,::Array<::System::Guid>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 98 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<int32_t> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<int32_t,::Array<int32_t>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>*() noexcept;

constexpr void __set__array(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__array() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<int32_t>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(int32_t  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<int32_t> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(int32_t  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::Queue`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3853))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3853), inst: 2 })
// CS Name: ::System.Collections.Generic::Queue`1<T>*
class CORDL_TYPE Queue_1<T> : public ::System::Object {
public:
// Declarations
using Enumerator = ::System::Collections::Generic::__Queue_1__Enumerator<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field MinimumGrow offset 0x0
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief Field GrowFactor offset 0x0
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field _array offset 0x10
 __declspec(property(get=__get__array, put=__set__array)) ::ArrayW<T,::Array<T>*>  _array;

/// @brief Field _head offset 0x18
 __declspec(property(get=__get__head, put=__set__head)) int32_t  _head;

/// @brief Field _tail offset 0x1c
 __declspec(property(get=__get__tail, put=__set__tail)) int32_t  _tail;

/// @brief Field _size offset 0x20
 __declspec(property(get=__get__size, put=__set__size)) int32_t  _size;

/// @brief Field _version offset 0x24
 __declspec(property(get=__get__version, put=__set__version)) int32_t  _version;

/// @brief Field _syncRoot offset 0x28
 __declspec(property(get=__get__syncRoot, put=__set__syncRoot)) ::System::Object*  _syncRoot;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=System_Collections_ICollection_get_IsSynchronized)) bool  System_Collections_ICollection_IsSynchronized;

 __declspec(property(get=System_Collections_ICollection_get_SyncRoot)) ::System::Object*  System_Collections_ICollection_SyncRoot;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::ICollection"
constexpr operator  ::System::Collections::ICollection*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

constexpr void __set__array(::ArrayW<T,::Array<T>*>  value) ;

constexpr ::ArrayW<T,::Array<T>*>& __get__array() ;

constexpr ::ArrayW<T,::Array<T>*> const& __get__array() const;

constexpr void __set__head(int32_t  value) ;

constexpr int32_t& __get__head() ;

constexpr int32_t const& __get__head() const;

constexpr void __set__tail(int32_t  value) ;

constexpr int32_t& __get__tail() ;

constexpr int32_t const& __get__tail() const;

constexpr void __set__size(int32_t  value) ;

constexpr int32_t& __get__size() ;

constexpr int32_t const& __get__size() const;

constexpr void __set__version(int32_t  value) ;

constexpr int32_t& __get__version() ;

constexpr int32_t const& __get__version() const;

constexpr void __set__syncRoot(::System::Object*  value) ;

constexpr ::System::Object* __get__syncRoot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__syncRoot() const;

static inline ::System::Collections::Generic::Queue_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Queue_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t get_Count() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Clear() ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_ICollection_CopyTo(::System::Array*  array, int32_t  index) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Enqueue(T  item) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::__Queue_1__Enumerator<T> GetEnumerator() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Dequeue() ;

/// @brief Method Peek addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Peek() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Contains(T  item) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

/// @brief Method SetCapacity addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetCapacity(int32_t  capacity) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline void MoveNext(ByRef<int32_t>  index) ;

/// @brief Method ThrowForEmptyQueue addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ThrowForEmptyQueue() ;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Queue_1(Queue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Queue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Queue_1(Queue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Queue_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Queue_1, "System.Collections.Generic", "Queue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::__Queue_1__Enumerator, "System.Collections.Generic", "Queue`1/Enumerator");
