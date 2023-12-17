#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTask_1)
namespace System {
class AsyncCallback;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__InternalDataRemover;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
template<typename TResult>
struct __OVRTask_1__Awaiter;
}
namespace GlobalNamespace {
template<typename TResult>
struct __OVRTask_1__Callback;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__CallbackRemover;
}
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__CallbackInvoker;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class __OVRTask_1__IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class __OVRTask_1__InternalData_1;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
struct __OVRTask_1__CallbackWithState_1;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace GlobalNamespace {
template<typename TResult,typename TCapture>
struct __OVRSpatialAnchor__InvertedCapture_2;
}
namespace GlobalNamespace {
struct __OVRSpatialAnchor__UnboundAnchor;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__CallbackInvoker;
}
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__CallbackRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class __OVRTask_1__IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template<typename TResult>
class __OVRTask_1__InternalDataRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class __OVRTask_1__InternalData_1;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class __OVRTask_1__CallbackInvoker<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __OVRTask_1__CallbackInvoker<TResult>;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__CallbackInvoker<bool>;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class __OVRTask_1__CallbackRemover<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __OVRTask_1__CallbackRemover<TResult>;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__CallbackRemover<bool>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
class __OVRTask_1__IncrementalResultSubscriber_1<TResult,T>;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
class __OVRTask_1__InternalDataRemover<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
class __OVRTask_1__InternalDataRemover<TResult>;
}
namespace GlobalNamespace {
template<>
class __OVRTask_1__InternalDataRemover<bool>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
class __OVRTask_1__InternalData_1<TResult,T>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
class __OVRTask_1__InternalData_1<bool,T>;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
template<typename TResult>
struct __OVRTask_1__Awaiter;
}
namespace GlobalNamespace {
template<typename TResult>
struct __OVRTask_1__Callback;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
struct __OVRTask_1__CallbackWithState_1;
}
namespace GlobalNamespace {
template<>
struct OVRTask_1<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct OVRTask_1<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct OVRTask_1<TResult>;
}
namespace GlobalNamespace {
template<>
struct OVRTask_1<bool>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__Awaiter<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct __OVRTask_1__Awaiter<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct __OVRTask_1__Awaiter<TResult>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__Awaiter<bool>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
struct __OVRTask_1__Callback<TResult>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult>
struct __OVRTask_1__Callback<TResult>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__Callback<bool>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
struct __OVRTask_1__CallbackWithState_1<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
struct __OVRTask_1__CallbackWithState_1<TResult,T>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>;
}
namespace GlobalNamespace {
template<>
struct __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
struct __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>;
}
namespace GlobalNamespace {
template<::il2cpp_utils::il2cpp_reference_type T>
struct __OVRTask_1__CallbackWithState_1<bool,T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRTask_1__CallbackInvoker);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRTask_1__CallbackRemover);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRTask_1__InternalDataRemover);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__OVRTask_1__InternalData_1);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRTask_1__Awaiter);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRTask_1__Callback);
MARK_GEN_VAL_T(::GlobalNamespace::__OVRTask_1__CallbackWithState_1);
// Type: ::CallbackInvoker
// Type: ::CallbackRemover
// Type: ::InternalDataRemover
// Type: ::InternalData`1
// Type: ::IncrementalResultSubscriber`1
// Type: ::Awaiter
// Type: ::Callback
// Type: ::CallbackWithState`1
// Type: ::OVRTask`1
// Type: ::CallbackInvoker
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8067))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8067), inst: 980 })
// CS Name: ::OVRTask`1::CallbackInvoker<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Guid  guid, ::GlobalNamespace::OVRAnchor  result) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::GlobalNamespace::OVRAnchor  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackInvoker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackInvoker
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8067)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8067), inst: 974 })
// CS Name: ::OVRTask`1::CallbackInvoker<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackInvoker<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Guid  guid, TResult  result) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, TResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackInvoker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackInvoker
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8067)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8067), inst: 105 })
// CS Name: ::OVRTask`1::CallbackInvoker<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackInvoker<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Guid  guid, bool  result) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, bool  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackInvoker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackInvoker
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8067)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8067), inst: 2 })
// CS Name: ::OVRTask`1::CallbackInvoker<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackInvoker<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Guid  guid, TResult  result) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, TResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackInvoker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackInvoker(__OVRTask_1__CallbackInvoker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackInvoker()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackRemover
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8068))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8068), inst: 980 })
// CS Name: ::OVRTask`1::CallbackRemover<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackRemover
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8068)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8068), inst: 974 })
// CS Name: ::OVRTask`1::CallbackRemover<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackRemover<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackRemover
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(8068))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8068), inst: 105 })
// CS Name: ::OVRTask`1::CallbackRemover<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackRemover<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackRemover
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8068)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8068), inst: 2 })
// CS Name: ::OVRTask`1::CallbackRemover<TResult>*
class CORDL_TYPE __OVRTask_1__CallbackRemover<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__CallbackRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__CallbackRemover(__OVRTask_1__CallbackRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalDataRemover
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8069)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8069), inst: 980 })
// CS Name: ::OVRTask`1::InternalDataRemover<TResult>*
class CORDL_TYPE __OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalDataRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalDataRemover
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8069)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8069), inst: 974 })
// CS Name: ::OVRTask`1::InternalDataRemover<TResult>*
class CORDL_TYPE __OVRTask_1__InternalDataRemover<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalDataRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalDataRemover
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8069)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8069), inst: 105 })
// CS Name: ::OVRTask`1::InternalDataRemover<TResult>*
class CORDL_TYPE __OVRTask_1__InternalDataRemover<bool> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalDataRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalDataRemover
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8069)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8069), inst: 2 })
// CS Name: ::OVRTask`1::InternalDataRemover<TResult>*
class CORDL_TYPE __OVRTask_1__InternalDataRemover<TResult> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Guid  guid) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalDataRemover", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalDataRemover(__OVRTask_1__InternalDataRemover const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalDataRemover()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalData`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8070))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8070), inst: 1006 })
// CS Name: ::OVRTask`1::InternalData`1<TResult,T>*
class CORDL_TYPE __OVRTask_1__InternalData_1<bool,T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid,T>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,T>* getStaticF_Data() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool TryGet(::System::Guid  taskId, ByRef<T>  data) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Set(::System::Guid  taskId, T  data) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalData_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalData_1(__OVRTask_1__InternalData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalData_1(__OVRTask_1__InternalData_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalData_1()  = default;
public:


// Fields

// Static field Data

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalData`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8070))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8070), inst: 81 })
// CS Name: ::OVRTask`1::InternalData`1<TResult,T>*
class CORDL_TYPE __OVRTask_1__InternalData_1<TResult,T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid,T>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,T>* getStaticF_Data() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method TryGet addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool TryGet(::System::Guid  taskId, ByRef<T>  data) ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Set(::System::Guid  taskId, T  data) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalData_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__InternalData_1(__OVRTask_1__InternalData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__InternalData_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__InternalData_1(__OVRTask_1__InternalData_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__InternalData_1()  = default;
public:


// Fields

// Static field Data

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::IncrementalResultSubscriber`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8071))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8071), inst: 81 })
// CS Name: ::OVRTask`1::IncrementalResultSubscriber`1<TResult,T>*
class CORDL_TYPE __OVRTask_1__IncrementalResultSubscriber_1<TResult,T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>* getStaticF_Subscribers() ;

static inline void setStaticF_Remover(::System::Action_1<::System::Guid>*  value) ;

static inline ::System::Action_1<::System::Guid>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Set addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Set(::System::Guid  taskId, ::System::Action_1<T>*  subscriber) ;

/// @brief Method Notify addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Notify(::System::Guid  taskId, T  result) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Remove(::System::Guid  id) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__IncrementalResultSubscriber_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTask_1__IncrementalResultSubscriber_1(__OVRTask_1__IncrementalResultSubscriber_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTask_1__IncrementalResultSubscriber_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTask_1__IncrementalResultSubscriber_1(__OVRTask_1__IncrementalResultSubscriber_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__IncrementalResultSubscriber_1()  = default;
public:


// Fields

// Static field Subscribers

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Awaiter
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 980 })
// CS Name: ::OVRTask`1::Awaiter<TResult>
struct CORDL_TYPE __OVRTask_1__Awaiter<::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _task offset 0x0
 __declspec(property(get=__get__task, put=__set__task)) ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  _task;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__task(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  value) ;

constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>& __get__task() ;

constexpr ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> const& __get__task() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRAnchor GetResult() ;

// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Awaiter(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  _task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Awaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Awaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Awaiter
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 974 })
// CS Name: ::OVRTask`1::Awaiter<TResult>
struct CORDL_TYPE __OVRTask_1__Awaiter<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _task offset 0x0
 __declspec(property(get=__get__task, put=__set__task)) ::GlobalNamespace::OVRTask_1<TResult>  _task;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__task(::GlobalNamespace::OVRTask_1<TResult>  value) ;

constexpr ::GlobalNamespace::OVRTask_1<TResult>& __get__task() ;

constexpr ::GlobalNamespace::OVRTask_1<TResult> const& __get__task() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRTask_1<TResult>  task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Awaiter(::GlobalNamespace::OVRTask_1<TResult>  _task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Awaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Awaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Awaiter
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 105 })
// CS Name: ::OVRTask`1::Awaiter<TResult>
struct CORDL_TYPE __OVRTask_1__Awaiter<bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _task offset 0x0
 __declspec(property(get=__get__task, put=__set__task)) ::GlobalNamespace::OVRTask_1<bool>  _task;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__task(::GlobalNamespace::OVRTask_1<bool>  value) ;

constexpr ::GlobalNamespace::OVRTask_1<bool>& __get__task() ;

constexpr ::GlobalNamespace::OVRTask_1<bool> const& __get__task() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRTask_1<bool>  task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetResult() ;

// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<bool>", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Awaiter(::GlobalNamespace::OVRTask_1<bool>  _task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Awaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Awaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Awaiter
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8072))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8072), inst: 2 })
// CS Name: ::OVRTask`1::Awaiter<TResult>
struct CORDL_TYPE __OVRTask_1__Awaiter<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _task offset 0x0
 __declspec(property(get=__get__task, put=__set__task)) ::GlobalNamespace::OVRTask_1<TResult>  _task;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

constexpr void __set__task(::GlobalNamespace::OVRTask_1<TResult>  value) ;

constexpr ::GlobalNamespace::OVRTask_1<TResult>& __get__task() ;

constexpr ::GlobalNamespace::OVRTask_1<TResult> const& __get__task() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRTask_1<TResult>  task) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

// Ctor Parameters [CppParam { name: "_task", ty: "::GlobalNamespace::OVRTask_1<TResult>", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Awaiter(::GlobalNamespace::OVRTask_1<TResult>  _task) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Awaiter(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Awaiter()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Callback
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8073), inst: 980 })
// CS Name: ::OVRTask`1::Callback<TResult>
struct CORDL_TYPE __OVRTask_1__Callback<::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _delegate offset 0x0
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_1<::GlobalNamespace::OVRAnchor>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>>* getStaticF_Callbacks() ;

constexpr void __set__delegate(::System::Action_1<::GlobalNamespace::OVRAnchor>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::OVRAnchor>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::OVRAnchor>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, ::GlobalNamespace::OVRAnchor  result) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(::GlobalNamespace::OVRAnchor  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<::GlobalNamespace::OVRAnchor>*  delegate) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::System::Action_1<::GlobalNamespace::OVRAnchor>*  delegate) ;

// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Callback(::System::Action_1<::GlobalNamespace::OVRAnchor>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Callback(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Callback()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Callback
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8073), inst: 974 })
// CS Name: ::OVRTask`1::Callback<TResult>
struct CORDL_TYPE __OVRTask_1__Callback<TResult> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _delegate offset 0x0
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_1<TResult>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult>>* getStaticF_Callbacks() ;

constexpr void __set__delegate(::System::Action_1<TResult>*  value) ;

constexpr ::System::Action_1<TResult>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TResult>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, TResult  result) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<TResult>*  delegate) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::System::Action_1<TResult>*  delegate) ;

// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Callback(::System::Action_1<TResult>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Callback(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Callback()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Callback
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8073), inst: 105 })
// CS Name: ::OVRTask`1::Callback<TResult>
struct CORDL_TYPE __OVRTask_1__Callback<bool> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _delegate offset 0x0
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_1<bool>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<bool>>* getStaticF_Callbacks() ;

constexpr void __set__delegate(::System::Action_1<bool>*  value) ;

constexpr ::System::Action_1<bool>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, bool  result) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<bool>*  delegate) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::System::Action_1<bool>*  delegate) ;

// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<bool>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Callback(::System::Action_1<bool>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Callback(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Callback()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Callback
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8073))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8073), inst: 2 })
// CS Name: ::OVRTask`1::Callback<TResult>
struct CORDL_TYPE __OVRTask_1__Callback<TResult> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _delegate offset 0x0
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_1<TResult>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__Callback<TResult>>* getStaticF_Callbacks() ;

constexpr void __set__delegate(::System::Action_1<TResult>*  value) ;

constexpr ::System::Action_1<TResult>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<TResult>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, TResult  result) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Action_1<TResult>*  delegate) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::System::Action_1<TResult>*  delegate) ;

// Ctor Parameters [CppParam { name: "_delegate", ty: "::System::Action_1<TResult>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__Callback(::System::Action_1<TResult>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__Callback(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__Callback()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type TResult_cordlgen_1,::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_2>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 1007 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  _data;

/// @brief Field _delegate offset 0x10
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>>* getStaticF_Callbacks() ;

constexpr void __set__data(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  value) ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>& __get__data() ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2> const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*  value) ;

constexpr ::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  data, ::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(TResult  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  data, ::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>  _data, ::System::Action_2<TResult,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<TResult_cordlgen_1,TCapture_cordlgen_2>>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 1006 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<bool,T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) T  _data;

/// @brief Field _delegate offset 0x8
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<bool,T>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,T>>* getStaticF_Callbacks() ;

constexpr void __set__data(T  value) ;

constexpr T& __get__data() ;

constexpr T const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<bool,T>*  value) ;

constexpr ::System::Action_2<bool,T>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool,T>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  data, ::System::Action_2<bool,T>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, T  data, ::System::Action_2<bool,T>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<bool,T>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(T  _data, ::System::Action_2<bool,T>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 1005 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  _data;

/// @brief Field _delegate offset 0x20
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>>* getStaticF_Callbacks() ;

constexpr void __set__data(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  value) ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>& __get__data() ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor> const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*  value) ;

constexpr ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>  _data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,::GlobalNamespace::__OVRSpatialAnchor__UnboundAnchor>>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCapture_cordlgen_0>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 1004 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>> : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  _data;

/// @brief Field _delegate offset 0x10
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>>* getStaticF_Callbacks() ;

constexpr void __set__data(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  value) ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>& __get__data() ;

constexpr ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0> const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*  value) ;

constexpr ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>  _data, ::System::Action_2<bool,::GlobalNamespace::__OVRSpatialAnchor__InvertedCapture_2<bool,TCapture_cordlgen_0>>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 496 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) ::GlobalNamespace::OVRAnchor  _data;

/// @brief Field _delegate offset 0x18
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool,::GlobalNamespace::OVRAnchor>>* getStaticF_Callbacks() ;

constexpr void __set__data(::GlobalNamespace::OVRAnchor  value) ;

constexpr ::GlobalNamespace::OVRAnchor& __get__data() ;

constexpr ::GlobalNamespace::OVRAnchor const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  value) ;

constexpr ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, bool  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::OVRAnchor  data, ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(bool  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, ::GlobalNamespace::OVRAnchor  data, ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(::GlobalNamespace::OVRAnchor  _data, ::System::Action_2<bool,::GlobalNamespace::OVRAnchor>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallbackWithState`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult,::il2cpp_utils::il2cpp_reference_type T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8074))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8074), inst: 81 })
// CS Name: ::OVRTask`1::CallbackWithState`1<TResult,T>
struct CORDL_TYPE __OVRTask_1__CallbackWithState_1<TResult,T> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _data offset 0x0
 __declspec(property(get=__get__data, put=__set__data)) T  _data;

/// @brief Field _delegate offset 0x8
 __declspec(property(get=__get__delegate, put=__set__delegate)) ::System::Action_2<TResult,T>*  _delegate;

static inline void setStaticF_Callbacks(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult,T>>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult,T>>* getStaticF_Callbacks() ;

constexpr void __set__data(T  value) ;

constexpr T& __get__data() ;

constexpr T const& __get__data() const;

constexpr void __set__delegate(::System::Action_2<TResult,T>*  value) ;

constexpr ::System::Action_2<TResult,T>* __get__delegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TResult,T>*> __get__delegate() const;

static inline void setStaticF_Invoker(::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>* getStaticF_Invoker() ;

static inline void setStaticF_Remover(::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*  value) ;

static inline ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline ::System::Action* getStaticF_Clearer() ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Invoke(::System::Guid  taskId, TResult  result) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  data, ::System::Action_2<TResult,T>*  delegate) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Clear() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Invoke(TResult  result) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Add(::System::Guid  taskId, T  data, ::System::Action_2<TResult,T>*  callback) ;

// Ctor Parameters [CppParam { name: "_data", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_delegate", ty: "::System::Action_2<TResult,T>*", modifiers: "", def_value: None }]
constexpr __OVRTask_1__CallbackWithState_1(T  _data, ::System::Action_2<TResult,T>*  _delegate) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTask_1__CallbackWithState_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTask_1__CallbackWithState_1()  = default;


// Fields

// Static field Callbacks

// Static field Invoker

// Static field Remover

// Static field Clearer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTask`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8075))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 980 })
// CS Name: ::OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1<::GlobalNamespace::OVRAnchor> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
template<typename T>
using CallbackWithState_1 = ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<::GlobalNamespace::OVRAnchor, T>;

using Callback = ::GlobalNamespace::__OVRTask_1__Callback<::GlobalNamespace::OVRAnchor>;

using Awaiter = ::GlobalNamespace::__OVRTask_1__Awaiter<::GlobalNamespace::OVRAnchor>;

template<typename T>
using IncrementalResultSubscriber_1 = ::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<::GlobalNamespace::OVRAnchor, T>;

template<typename T>
using InternalData_1 = ::GlobalNamespace::__OVRTask_1__InternalData_1<::GlobalNamespace::OVRAnchor, T>;

using InternalDataRemover = ::GlobalNamespace::__OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor>;

using CallbackRemover = ::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>;

using CallbackInvoker = ::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _id offset 0x0
 __declspec(property(get=__get__id, put=__set__id)) ::System::Guid  _id;

 __declspec(property(get=get_IsPending)) bool  IsPending;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending() ;

static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRAnchor>* getStaticF_Results() ;

static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* getStaticF_Continuations() ;

static inline void setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<::GlobalNamespace::OVRAnchor>*>* getStaticF_CallbackInvokers() ;

static inline void setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<::GlobalNamespace::OVRAnchor>*>* getStaticF_CallbackRemovers() ;

static inline void setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_CallbackClearers() ;

static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<::GlobalNamespace::OVRAnchor>*>* getStaticF_InternalDataRemovers() ;

static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers() ;

static inline void setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* getStaticF_SubscriberRemovers() ;

static inline void setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_SubscriberClearers() ;

constexpr void __set__id(::System::Guid  value) ;

constexpr ::System::Guid& __get__id() ;

constexpr ::System::Guid const& __get__id() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  id) ;

/// @brief Method AddToPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToPending() ;

/// @brief Method get_IsPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsPending() ;

/// @brief Method SetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SetInternalData(T  data) ;

/// @brief Method TryGetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool TryGetInternalData(ByRef<T>  data) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(::GlobalNamespace::OVRAnchor  result) ;

/// @brief Method SetIncrementalResultCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable) ;

/// @brief Method NotifyIncrementalResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void NotifyIncrementalResult(TIncrementalResult  incrementalResult) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::OVRAnchor GetResult() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Awaiter<::GlobalNamespace::OVRAnchor> GetAwaiter() ;

/// @brief Method WithContinuation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void WithContinuation(::System::Action*  continuation) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ContinueWith(::System::Action_1<::GlobalNamespace::OVRAnchor>*  onCompleted) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void ContinueWith(::System::Action_2<::GlobalNamespace::OVRAnchor,T>*  onCompleted, T  state) ;

/// @brief Method ValidateDelegateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  lhs, ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  lhs, ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>  rhs) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr OVRTask_1(::System::Guid  _id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTask_1()  = default;


// Fields

// Static field Pending

// Static field Results

// Static field Continuations

// Static field CallbackInvokers

// Static field CallbackRemovers

// Static field CallbackClearers

// Static field InternalDataRemovers

// Static field InternalDataClearers

// Static field SubscriberRemovers

// Static field SubscriberClearers


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTask`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8075))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 974 })
// CS Name: ::OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
template<typename T>
using CallbackWithState_1 = ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>;

using Callback = ::GlobalNamespace::__OVRTask_1__Callback<TResult>;

using Awaiter = ::GlobalNamespace::__OVRTask_1__Awaiter<TResult>;

template<typename T>
using IncrementalResultSubscriber_1 = ::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>;

template<typename T>
using InternalData_1 = ::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>;

using InternalDataRemover = ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>;

using CallbackRemover = ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>;

using CallbackInvoker = ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _id offset 0x0
 __declspec(property(get=__get__id, put=__set__id)) ::System::Guid  _id;

 __declspec(property(get=get_IsPending)) bool  IsPending;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending() ;

static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>* getStaticF_Results() ;

static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* getStaticF_Continuations() ;

static inline void setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>* getStaticF_CallbackInvokers() ;

static inline void setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>* getStaticF_CallbackRemovers() ;

static inline void setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_CallbackClearers() ;

static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>* getStaticF_InternalDataRemovers() ;

static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers() ;

static inline void setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* getStaticF_SubscriberRemovers() ;

static inline void setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_SubscriberClearers() ;

constexpr void __set__id(::System::Guid  value) ;

constexpr ::System::Guid& __get__id() ;

constexpr ::System::Guid const& __get__id() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  id) ;

/// @brief Method AddToPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToPending() ;

/// @brief Method get_IsPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsPending() ;

/// @brief Method SetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SetInternalData(T  data) ;

/// @brief Method TryGetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool TryGetInternalData(ByRef<T>  data) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method SetIncrementalResultCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable) ;

/// @brief Method NotifyIncrementalResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void NotifyIncrementalResult(TIncrementalResult  incrementalResult) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Awaiter<TResult> GetAwaiter() ;

/// @brief Method WithContinuation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void WithContinuation(::System::Action*  continuation) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ContinueWith(::System::Action_1<TResult>*  onCompleted) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void ContinueWith(::System::Action_2<TResult,T>*  onCompleted, T  state) ;

/// @brief Method ValidateDelegateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::GlobalNamespace::OVRTask_1<TResult>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr OVRTask_1(::System::Guid  _id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTask_1()  = default;


// Fields

// Static field Pending

// Static field Results

// Static field Continuations

// Static field CallbackInvokers

// Static field CallbackRemovers

// Static field CallbackClearers

// Static field InternalDataRemovers

// Static field InternalDataClearers

// Static field SubscriberRemovers

// Static field SubscriberClearers


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTask`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8075))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 105 })
// CS Name: ::OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1<bool> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
template<typename T>
using CallbackWithState_1 = ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<bool, T>;

using Callback = ::GlobalNamespace::__OVRTask_1__Callback<bool>;

using Awaiter = ::GlobalNamespace::__OVRTask_1__Awaiter<bool>;

template<typename T>
using IncrementalResultSubscriber_1 = ::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<bool, T>;

template<typename T>
using InternalData_1 = ::GlobalNamespace::__OVRTask_1__InternalData_1<bool, T>;

using InternalDataRemover = ::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>;

using CallbackRemover = ::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>;

using CallbackInvoker = ::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _id offset 0x0
 __declspec(property(get=__get__id, put=__set__id)) ::System::Guid  _id;

 __declspec(property(get=get_IsPending)) bool  IsPending;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<bool>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<bool>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending() ;

static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,bool>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,bool>* getStaticF_Results() ;

static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* getStaticF_Continuations() ;

static inline void setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<bool>*>* getStaticF_CallbackInvokers() ;

static inline void setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<bool>*>* getStaticF_CallbackRemovers() ;

static inline void setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_CallbackClearers() ;

static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<bool>*>* getStaticF_InternalDataRemovers() ;

static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers() ;

static inline void setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* getStaticF_SubscriberRemovers() ;

static inline void setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_SubscriberClearers() ;

constexpr void __set__id(::System::Guid  value) ;

constexpr ::System::Guid& __get__id() ;

constexpr ::System::Guid const& __get__id() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  id) ;

/// @brief Method AddToPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToPending() ;

/// @brief Method get_IsPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsPending() ;

/// @brief Method SetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SetInternalData(T  data) ;

/// @brief Method TryGetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool TryGetInternalData(ByRef<T>  data) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(bool  result) ;

/// @brief Method SetIncrementalResultCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable) ;

/// @brief Method NotifyIncrementalResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void NotifyIncrementalResult(TIncrementalResult  incrementalResult) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool GetResult() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Awaiter<bool> GetAwaiter() ;

/// @brief Method WithContinuation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void WithContinuation(::System::Action*  continuation) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ContinueWith(::System::Action_1<bool>*  onCompleted) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void ContinueWith(::System::Action_2<bool,T>*  onCompleted, T  state) ;

/// @brief Method ValidateDelegateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::GlobalNamespace::OVRTask_1<bool>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRTask_1<bool>  lhs, ::GlobalNamespace::OVRTask_1<bool>  rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<bool>  lhs, ::GlobalNamespace::OVRTask_1<bool>  rhs) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr OVRTask_1(::System::Guid  _id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTask_1()  = default;


// Fields

// Static field Pending

// Static field Results

// Static field Continuations

// Static field CallbackInvokers

// Static field CallbackRemovers

// Static field CallbackClearers

// Static field InternalDataRemovers

// Static field InternalDataClearers

// Static field SubscriberRemovers

// Static field SubscriberClearers


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTask`1
namespace GlobalNamespace {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TResult>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8075))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8075), inst: 2 })
// CS Name: ::OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1<TResult> : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
template<typename T>
using CallbackWithState_1 = ::GlobalNamespace::__OVRTask_1__CallbackWithState_1<TResult, T>;

using Callback = ::GlobalNamespace::__OVRTask_1__Callback<TResult>;

using Awaiter = ::GlobalNamespace::__OVRTask_1__Awaiter<TResult>;

template<typename T>
using IncrementalResultSubscriber_1 = ::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1<TResult, T>;

template<typename T>
using InternalData_1 = ::GlobalNamespace::__OVRTask_1__InternalData_1<TResult, T>;

using InternalDataRemover = ::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>;

using CallbackRemover = ::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>;

using CallbackInvoker = ::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _id offset 0x0
 __declspec(property(get=__get__id, put=__set__id)) ::System::Guid  _id;

 __declspec(property(get=get_IsPending)) bool  IsPending;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending() ;

static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>* getStaticF_Results() ;

static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* getStaticF_Continuations() ;

static inline void setStaticF_CallbackInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackInvoker<TResult>*>* getStaticF_CallbackInvokers() ;

static inline void setStaticF_CallbackRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__CallbackRemover<TResult>*>* getStaticF_CallbackRemovers() ;

static inline void setStaticF_CallbackClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_CallbackClearers() ;

static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::__OVRTask_1__InternalDataRemover<TResult>*>* getStaticF_InternalDataRemovers() ;

static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers() ;

static inline void setStaticF_SubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* getStaticF_SubscriberRemovers() ;

static inline void setStaticF_SubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_SubscriberClearers() ;

constexpr void __set__id(::System::Guid  value) ;

constexpr ::System::Guid& __get__id() ;

constexpr ::System::Guid const& __get__id() const;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Guid  id) ;

/// @brief Method AddToPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline void AddToPending() ;

/// @brief Method get_IsPending addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsPending() ;

/// @brief Method SetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void SetInternalData(T  data) ;

/// @brief Method TryGetInternalData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline bool TryGetInternalData(ByRef<T>  data) ;

/// @brief Method SetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetResult(TResult  result) ;

/// @brief Method SetIncrementalResultCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable) ;

/// @brief Method NotifyIncrementalResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TIncrementalResult>
inline void NotifyIncrementalResult(TIncrementalResult  incrementalResult) ;

/// @brief Method get_IsCompleted addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsCompleted() ;

/// @brief Method GetResult addr 0x0 size 0xffffffffffffffff virtual false final false
inline TResult GetResult() ;

/// @brief Method GetAwaiter addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::__OVRTask_1__Awaiter<TResult> GetAwaiter() ;

/// @brief Method WithContinuation addr 0x0 size 0xffffffffffffffff virtual false final false
inline void WithContinuation(::System::Action*  continuation) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ContinueWith(::System::Action_1<TResult>*  onCompleted) ;

/// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline void ContinueWith(::System::Action_2<TResult,T>*  onCompleted, T  state) ;

/// @brief Method ValidateDelegateAndThrow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::GlobalNamespace::OVRTask_1<TResult>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None }]
constexpr OVRTask_1(::System::Guid  _id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTask_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTask_1()  = default;


// Fields

// Static field Pending

// Static field Results

// Static field Continuations

// Static field CallbackInvokers

// Static field CallbackRemovers

// Static field CallbackClearers

// Static field InternalDataRemovers

// Static field InternalDataClearers

// Static field SubscriberRemovers

// Static field SubscriberClearers


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRTask_1__CallbackInvoker, "", "OVRTask`1/CallbackInvoker");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRTask_1__CallbackRemover, "", "OVRTask`1/CallbackRemover");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRTask_1__IncrementalResultSubscriber_1, "", "OVRTask`1/IncrementalResultSubscriber`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRTask_1__InternalDataRemover, "", "OVRTask`1/InternalDataRemover");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__OVRTask_1__InternalData_1, "", "OVRTask`1/InternalData`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRTask_1, "", "OVRTask`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRTask_1__Awaiter, "", "OVRTask`1/Awaiter");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRTask_1__Callback, "", "OVRTask`1/Callback");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__OVRTask_1__CallbackWithState_1, "", "OVRTask`1/CallbackWithState`1");
