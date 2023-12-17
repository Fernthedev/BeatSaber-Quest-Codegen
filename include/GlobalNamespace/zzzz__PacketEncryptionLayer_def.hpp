#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketEncryptionLayer)
namespace System::Net {
class IPAddress;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__EncryptionStatistics;
}
namespace System::Net {
class IPEndPoint;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;
}
namespace GlobalNamespace {
class __EncryptionUtility__IEncryptionState;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ExpiringDictionary_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__EncryptionStatistics;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PacketEncryptionLayer);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0);
MARK_REF_PTR_T(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0);
MARK_VAL_T(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25);
MARK_VAL_T(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27);
// Type: ::EncryptionStatistics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12907))
// CS Name: ::PacketEncryptionLayer::EncryptionStatistics*
class CORDL_TYPE __PacketEncryptionLayer__EncryptionStatistics : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field _packetsReceivedPlaintext offset 0x10
 __declspec(property(get=__get__packetsReceivedPlaintext, put=__set__packetsReceivedPlaintext)) int64_t  _packetsReceivedPlaintext;

/// @brief Field _packetsReceivedEncrypted offset 0x18
 __declspec(property(get=__get__packetsReceivedEncrypted, put=__set__packetsReceivedEncrypted)) int64_t  _packetsReceivedEncrypted;

/// @brief Field _packetsReceivedRejected offset 0x20
 __declspec(property(get=__get__packetsReceivedRejected, put=__set__packetsReceivedRejected)) int64_t  _packetsReceivedRejected;

/// @brief Field _packetsSentPlaintext offset 0x28
 __declspec(property(get=__get__packetsSentPlaintext, put=__set__packetsSentPlaintext)) int64_t  _packetsSentPlaintext;

/// @brief Field _packetsSentEncrypted offset 0x30
 __declspec(property(get=__get__packetsSentEncrypted, put=__set__packetsSentEncrypted)) int64_t  _packetsSentEncrypted;

/// @brief Field _packetsSentRejected offset 0x38
 __declspec(property(get=__get__packetsSentRejected, put=__set__packetsSentRejected)) int64_t  _packetsSentRejected;

/// @brief Field _encryptionProcessingTime offset 0x40
 __declspec(property(get=__get__encryptionProcessingTime, put=__set__encryptionProcessingTime)) int64_t  _encryptionProcessingTime;

/// @brief Field _decryptionProcessingTime offset 0x48
 __declspec(property(get=__get__decryptionProcessingTime, put=__set__decryptionProcessingTime)) int64_t  _decryptionProcessingTime;

 __declspec(property(get=get_packetsReceivedPlaintext)) int64_t  packetsReceivedPlaintext;

 __declspec(property(get=get_packetsReceivedEncrypted)) int64_t  packetsReceivedEncrypted;

 __declspec(property(get=get_packetsReceivedRejected)) int64_t  packetsReceivedRejected;

 __declspec(property(get=get_packetsSentPlaintext)) int64_t  packetsSentPlaintext;

 __declspec(property(get=get_packetsSentEncrypted)) int64_t  packetsSentEncrypted;

 __declspec(property(get=get_packetsSentRejected)) int64_t  packetsSentRejected;

 __declspec(property(get=get_encryptionProcessingTime)) int64_t  encryptionProcessingTime;

 __declspec(property(get=get_decryptionProcessingTime)) int64_t  decryptionProcessingTime;

constexpr void __set__packetsReceivedPlaintext(int64_t  value) ;

constexpr int64_t& __get__packetsReceivedPlaintext() ;

constexpr int64_t const& __get__packetsReceivedPlaintext() const;

constexpr void __set__packetsReceivedEncrypted(int64_t  value) ;

constexpr int64_t& __get__packetsReceivedEncrypted() ;

constexpr int64_t const& __get__packetsReceivedEncrypted() const;

constexpr void __set__packetsReceivedRejected(int64_t  value) ;

constexpr int64_t& __get__packetsReceivedRejected() ;

constexpr int64_t const& __get__packetsReceivedRejected() const;

constexpr void __set__packetsSentPlaintext(int64_t  value) ;

constexpr int64_t& __get__packetsSentPlaintext() ;

constexpr int64_t const& __get__packetsSentPlaintext() const;

constexpr void __set__packetsSentEncrypted(int64_t  value) ;

constexpr int64_t& __get__packetsSentEncrypted() ;

constexpr int64_t const& __get__packetsSentEncrypted() const;

constexpr void __set__packetsSentRejected(int64_t  value) ;

constexpr int64_t& __get__packetsSentRejected() ;

constexpr int64_t const& __get__packetsSentRejected() const;

constexpr void __set__encryptionProcessingTime(int64_t  value) ;

constexpr int64_t& __get__encryptionProcessingTime() ;

constexpr int64_t const& __get__encryptionProcessingTime() const;

constexpr void __set__decryptionProcessingTime(int64_t  value) ;

constexpr int64_t& __get__decryptionProcessingTime() ;

constexpr int64_t const& __get__decryptionProcessingTime() const;

/// @brief Method get_packetsReceivedPlaintext addr 0xe500d8 size 0xc virtual false final false
inline int64_t get_packetsReceivedPlaintext() ;

/// @brief Method get_packetsReceivedEncrypted addr 0xe500e4 size 0xc virtual false final false
inline int64_t get_packetsReceivedEncrypted() ;

/// @brief Method get_packetsReceivedRejected addr 0xe500f0 size 0xc virtual false final false
inline int64_t get_packetsReceivedRejected() ;

/// @brief Method get_packetsSentPlaintext addr 0xe500fc size 0xc virtual false final false
inline int64_t get_packetsSentPlaintext() ;

/// @brief Method get_packetsSentEncrypted addr 0xe50108 size 0xc virtual false final false
inline int64_t get_packetsSentEncrypted() ;

/// @brief Method get_packetsSentRejected addr 0xe50114 size 0xc virtual false final false
inline int64_t get_packetsSentRejected() ;

/// @brief Method get_encryptionProcessingTime addr 0xe50120 size 0x7c virtual false final false
inline int64_t get_encryptionProcessingTime() ;

/// @brief Method get_decryptionProcessingTime addr 0xe5019c size 0x7c virtual false final false
inline int64_t get_decryptionProcessingTime() ;

/// @brief Method IncrementPacketsReceivedPlaintext addr 0xe4e518 size 0xc virtual false final false
inline void IncrementPacketsReceivedPlaintext() ;

/// @brief Method IncrementPacketsReceivedEncrypted addr 0xe4e500 size 0xc virtual false final false
inline void IncrementPacketsReceivedEncrypted() ;

/// @brief Method IncrementPacketsReceivedRejected addr 0xe4e524 size 0xc virtual false final false
inline void IncrementPacketsReceivedRejected() ;

/// @brief Method IncrementPacketsSentPlaintext addr 0xe4e8c8 size 0xc virtual false final false
inline void IncrementPacketsSentPlaintext() ;

/// @brief Method IncrementPacketsSentEncrypted addr 0xe4e8b0 size 0xc virtual false final false
inline void IncrementPacketsSentEncrypted() ;

/// @brief Method IncrementPacketsSentRejected addr 0xe4e8d4 size 0xc virtual false final false
inline void IncrementPacketsSentRejected() ;

/// @brief Method AddEncryptionProcessingTime addr 0xe4e8bc size 0xc virtual false final false
inline void AddEncryptionProcessingTime(int64_t  time) ;

/// @brief Method AddDecryptionProcessingTime addr 0xe4e50c size 0xc virtual false final false
inline void AddDecryptionProcessingTime(int64_t  time) ;

static inline ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* New_ctor() ;

/// @brief Method .ctor addr 0xe4e024 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__EncryptionStatistics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PacketEncryptionLayer__EncryptionStatistics(__PacketEncryptionLayer__EncryptionStatistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__EncryptionStatistics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PacketEncryptionLayer__EncryptionStatistics(__PacketEncryptionLayer__EncryptionStatistics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer__EncryptionStatistics()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12908))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass4_0*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field port offset 0x10
 __declspec(property(get=__get_port, put=__set_port)) int32_t  port;

constexpr void __set_port(int32_t  value) ;

constexpr int32_t& __get_port() ;

constexpr int32_t const& __get_port() const;

static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0* New_ctor() ;

/// @brief Method .ctor addr 0xe5041c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetSortedEncryptionStates>b__0 addr 0xe50510 size 0x74 virtual false final false
inline int32_t _GetSortedEncryptionStates_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  kvp) ;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12909))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c*  value) ;

static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* getStaticF___9() ;

static inline void setStaticF___9__4_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*  value) ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* getStaticF___9__4_1() ;

static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c* New_ctor() ;

/// @brief Method .ctor addr 0xe505e8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetSortedEncryptionStates>b__4_1 addr 0xe505f0 size 0x3c virtual false final false
inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* _GetSortedEncryptionStates_b__4_1(::System::Collections::Generic::KeyValuePair_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  kvp) ;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PacketEncryptionLayer__PendingEncryptionStateList____c(__PacketEncryptionLayer__PendingEncryptionStateList____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PacketEncryptionLayer__PendingEncryptionStateList____c(__PacketEncryptionLayer__PendingEncryptionStateList____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer__PendingEncryptionStateList____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__4_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12910))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass8_0*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field encryptionState offset 0x10
 __declspec(property(get=__get_encryptionState, put=__set_encryptionState)) ::GlobalNamespace::__EncryptionUtility__IEncryptionState*  encryptionState;

constexpr void __set_encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState*  value) ;

constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState* __get_encryptionState() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __get_encryptionState() const;

static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0xe5048c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <Remove>b__0 addr 0xe5062c size 0x48 virtual false final false
inline bool _Remove_b__0(::System::Collections::Generic::KeyValuePair_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  kvp) ;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PendingEncryptionStateList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12911))
// CS Name: ::PacketEncryptionLayer::PendingEncryptionStateList*
class CORDL_TYPE __PacketEncryptionLayer__PendingEncryptionStateList : public ::System::Object {
public:
// Declarations
using __c__DisplayClass8_0 = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;

using __c = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c;

using __c__DisplayClass4_0 = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _pendingStatesByPort offset 0x10
 __declspec(property(get=__get__pendingStatesByPort, put=__set__pendingStatesByPort)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*  _pendingStatesByPort;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__pendingStatesByPort(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* __get__pendingStatesByPort() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> __get__pendingStatesByPort() const;

/// @brief Method get_isEmpty addr 0xe4eed0 size 0x5c virtual false final false
inline bool get_isEmpty() ;

/// @brief Method Dispose addr 0xe50218 size 0x204 virtual true final true
inline void Dispose() ;

/// @brief Method GetSortedEncryptionStates addr 0xe4f960 size 0x1c4 virtual false final false
inline ::ArrayW<::GlobalNamespace::__EncryptionUtility__IEncryptionState*,::Array<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> GetSortedEncryptionStates(int32_t  port) ;

/// @brief Method TryGetEncryptionState addr 0xe4f618 size 0x1ec virtual false final false
inline bool TryGetEncryptionState(int32_t  port, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  encryptionState) ;

/// @brief Method Add addr 0xe50424 size 0x68 virtual false final false
inline void Add(int32_t  port, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*  encryptionState) ;

/// @brief Method Remove addr 0xe4ee78 size 0x58 virtual false final false
inline bool Remove(int32_t  port) ;

/// @brief Method Remove addr 0xe4fdd4 size 0x174 virtual false final false
inline bool Remove(int32_t  port, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*  encryptionState) ;

static inline ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList* New_ctor() ;

/// @brief Method .ctor addr 0xe50494 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PacketEncryptionLayer__PendingEncryptionStateList(__PacketEncryptionLayer__PendingEncryptionStateList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PacketEncryptionLayer__PendingEncryptionStateList(__PacketEncryptionLayer__PendingEncryptionStateList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer__PendingEncryptionStateList()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<AddEncryptedEndpointAsync>d__25
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12912))
// CS Name: ::PacketEncryptionLayer::<AddEncryptedEndpointAsync>d__25
struct CORDL_TYPE __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PacketEncryptionLayer*  __4__this;

/// @brief Field preMasterSecret offset 0x28
 __declspec(property(get=__get_preMasterSecret, put=__set_preMasterSecret)) ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret;

/// @brief Field serverRandom offset 0x30
 __declspec(property(get=__get_serverRandom, put=__set_serverRandom)) ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom;

/// @brief Field clientRandom offset 0x38
 __declspec(property(get=__get_clientRandom, put=__set_clientRandom)) ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom;

/// @brief Field isClient offset 0x40
 __declspec(property(get=__get_isClient, put=__set_isClient)) bool  isClient;

/// @brief Field endPoint offset 0x48
 __declspec(property(get=__get_endPoint, put=__set_endPoint)) ::System::Net::IPEndPoint*  endPoint;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::PacketEncryptionLayer*  value) ;

constexpr ::GlobalNamespace::PacketEncryptionLayer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PacketEncryptionLayer*> __get___4__this() const;

constexpr void __set_preMasterSecret(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_preMasterSecret() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_preMasterSecret() const;

constexpr void __set_serverRandom(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_serverRandom() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_serverRandom() const;

constexpr void __set_clientRandom(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_clientRandom() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_clientRandom() const;

constexpr void __set_isClient(bool  value) ;

constexpr bool& __get_isClient() ;

constexpr bool const& __get_isClient() const;

constexpr void __set_endPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get_endPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get_endPoint() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe50674 size 0x35c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe509d0 size 0x58 virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }]
constexpr __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __t__builder, ::GlobalNamespace::PacketEncryptionLayer*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom, bool  isClient, ::System::Net::IPEndPoint*  endPoint, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<AddPendingEncryptedEndpointAsync>d__27
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12913))
// CS Name: ::PacketEncryptionLayer::<AddPendingEncryptedEndpointAsync>d__27
struct CORDL_TYPE __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27 : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::PacketEncryptionLayer*  __4__this;

/// @brief Field preMasterSecret offset 0x28
 __declspec(property(get=__get_preMasterSecret, put=__set_preMasterSecret)) ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret;

/// @brief Field serverRandom offset 0x30
 __declspec(property(get=__get_serverRandom, put=__set_serverRandom)) ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom;

/// @brief Field clientRandom offset 0x38
 __declspec(property(get=__get_clientRandom, put=__set_clientRandom)) ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom;

/// @brief Field isClient offset 0x40
 __declspec(property(get=__get_isClient, put=__set_isClient)) bool  isClient;

/// @brief Field endPoint offset 0x48
 __declspec(property(get=__get_endPoint, put=__set_endPoint)) ::System::Net::IPEndPoint*  endPoint;

/// @brief Field <>u__1 offset 0x50
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::PacketEncryptionLayer*  value) ;

constexpr ::GlobalNamespace::PacketEncryptionLayer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PacketEncryptionLayer*> __get___4__this() const;

constexpr void __set_preMasterSecret(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_preMasterSecret() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_preMasterSecret() const;

constexpr void __set_serverRandom(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_serverRandom() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_serverRandom() const;

constexpr void __set_clientRandom(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_clientRandom() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_clientRandom() const;

constexpr void __set_isClient(bool  value) ;

constexpr bool& __get_isClient() ;

constexpr bool const& __get_isClient() const;

constexpr void __set_endPoint(::System::Net::IPEndPoint*  value) ;

constexpr ::System::Net::IPEndPoint* __get_endPoint() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> __get_endPoint() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0xe50a28 size 0x434 virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0xe50e5c size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PacketEncryptionLayer*", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers: "", def_value: None }]
constexpr __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::GlobalNamespace::PacketEncryptionLayer*  __4__this, ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom, bool  isClient, ::System::Net::IPEndPoint*  endPoint, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PacketEncryptionLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14242))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12914))
// CS Name: ::PacketEncryptionLayer*
class CORDL_TYPE PacketEncryptionLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
// Declarations
using _AddPendingEncryptedEndpointAsync_d__27 = ::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;

using _AddEncryptedEndpointAsync_d__25 = ::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;

using PendingEncryptionStateList = ::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList;

using EncryptionStatistics = ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::LiteNetLib::Layers::PacketLayerBase)]{};

/// @brief Field kEncryptedPacketType offset 0x0
static constexpr uint8_t  kEncryptedPacketType{static_cast<uint8_t>(0x1u)};

/// @brief Field kPlaintextPacketType offset 0x0
static constexpr uint8_t  kPlaintextPacketType{static_cast<uint8_t>(0x0u)};

/// @brief Field kEncryptionStateTimeoutMs offset 0x0
static constexpr int64_t  kEncryptionStateTimeoutMs{static_cast<int64_t>(0x493e0)};

/// @brief Field kPendingEncryptionStateTimeoutMs offset 0x0
static constexpr int64_t  kPendingEncryptionStateTimeoutMs{static_cast<int64_t>(0x2710)};

/// @brief Field statistics offset 0x18
 __declspec(property(get=__get_statistics, put=__set_statistics)) ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*  statistics;

/// @brief Field _taskUtility offset 0x20
 __declspec(property(get=__get__taskUtility, put=__set__taskUtility)) ::BGNet::Core::ITaskUtility*  _taskUtility;

/// @brief Field _encryptionStates offset 0x28
 __declspec(property(get=__get__encryptionStates, put=__set__encryptionStates)) ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*  _encryptionStates;

/// @brief Field _pendingEncryptionStates offset 0x30
 __declspec(property(get=__get__pendingEncryptionStates, put=__set__pendingEncryptionStates)) ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*,::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>*  _pendingEncryptionStates;

/// @brief Field _unencryptedTrafficFilter offset 0x38
 __declspec(property(get=__get__unencryptedTrafficFilter, put=__set__unencryptedTrafficFilter)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _unencryptedTrafficFilter;

/// @brief Field <filterUnencryptedTraffic>k__BackingField offset 0x40
 __declspec(property(get=__get__filterUnencryptedTraffic_k__BackingField, put=__set__filterUnencryptedTraffic_k__BackingField)) bool  _filterUnencryptedTraffic_k__BackingField;

/// @brief Field <enableStatistics>k__BackingField offset 0x41
 __declspec(property(get=__get__enableStatistics_k__BackingField, put=__set__enableStatistics_k__BackingField)) bool  _enableStatistics_k__BackingField;

 __declspec(property(get=get_filterUnencryptedTraffic, put=set_filterUnencryptedTraffic)) bool  filterUnencryptedTraffic;

 __declspec(property(get=get_enableStatistics, put=set_enableStatistics)) bool  enableStatistics;

static inline void setStaticF__stopwatch(::System::Diagnostics::Stopwatch*  value) ;

static inline ::System::Diagnostics::Stopwatch* getStaticF__stopwatch() ;

constexpr void __set_statistics(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*  value) ;

constexpr ::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics* __get_statistics() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*> __get_statistics() const;

constexpr void __set__taskUtility(::BGNet::Core::ITaskUtility*  value) ;

constexpr ::BGNet::Core::ITaskUtility* __get__taskUtility() ;

constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> __get__taskUtility() const;

constexpr void __set__encryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*  value) ;

constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* __get__encryptionStates() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPEndPoint*,::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*> __get__encryptionStates() const;

constexpr void __set__pendingEncryptionStates(::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*,::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>*  value) ;

constexpr ::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*,::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>* __get__pendingEncryptionStates() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExpiringDictionary_2<::System::Net::IPAddress*,::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*>*> __get__pendingEncryptionStates() const;

constexpr void __set__unencryptedTrafficFilter(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__unencryptedTrafficFilter() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__unencryptedTrafficFilter() const;

constexpr void __set__filterUnencryptedTraffic_k__BackingField(bool  value) ;

constexpr bool& __get__filterUnencryptedTraffic_k__BackingField() ;

constexpr bool const& __get__filterUnencryptedTraffic_k__BackingField() const;

constexpr void __set__enableStatistics_k__BackingField(bool  value) ;

constexpr bool& __get__enableStatistics_k__BackingField() ;

constexpr bool const& __get__enableStatistics_k__BackingField() const;

/// @brief Method get_filterUnencryptedTraffic addr 0xe4dedc size 0x8 virtual false final false
inline bool get_filterUnencryptedTraffic() ;

/// @brief Method set_filterUnencryptedTraffic addr 0xe4dee4 size 0xc virtual false final false
inline void set_filterUnencryptedTraffic(bool  value) ;

/// @brief Method get_enableStatistics addr 0xe4def0 size 0x8 virtual false final false
inline bool get_enableStatistics() ;

/// @brief Method set_enableStatistics addr 0xe4def8 size 0xc virtual false final false
inline void set_enableStatistics(bool  value) ;

static inline ::GlobalNamespace::PacketEncryptionLayer* New_ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility) ;

/// @brief Method .ctor addr 0xe4df04 size 0x120 virtual false final false
inline void _ctor(::BGNet::Core::ITimeProvider*  timeProvider, ::BGNet::Core::ITaskUtility*  taskUtility) ;

/// @brief Method ProcessInboundPacket addr 0xe4e02c size 0x1b8 virtual true final false
inline void ProcessInboundPacket(::System::Net::IPEndPoint*  remoteEndPoint, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  data, ByRef<int32_t>  offset, ByRef<int32_t>  length) ;

/// @brief Method ProcessOutBoundPacket addr 0xe4e530 size 0x198 virtual true final false
inline void ProcessOutBoundPacket(::System::Net::IPEndPoint*  remoteEndPoint, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  data, ByRef<int32_t>  offset, ByRef<int32_t>  length) ;

/// @brief Method SetUnencryptedTrafficFilter addr 0xe4e8e0 size 0x8 virtual false final false
inline void SetUnencryptedTrafficFilter(::ArrayW<uint8_t,::Array<uint8_t>*>  unencryptedTrafficFilter) ;

/// @brief Method AddEncryptedEndpoint addr 0xe4e8e8 size 0x168 virtual false final false
inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* AddEncryptedEndpoint(::System::Net::IPEndPoint*  endPoint, ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom, bool  isClient) ;

/// @brief Method AddEncryptedEndpointAsync addr 0xe4ea50 size 0x12c virtual false final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>* AddEncryptedEndpointAsync(::System::Net::IPEndPoint*  endPoint, ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom, bool  isClient) ;

/// @brief Method RemoveEncryptedEndpoint addr 0xe4eb7c size 0x2fc virtual false final false
inline bool RemoveEncryptedEndpoint(::System::Net::IPEndPoint*  endPoint, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*  encryptedState) ;

/// @brief Method AddPendingEncryptedEndpointAsync addr 0xe4ef2c size 0x10c virtual false final false
inline ::System::Threading::Tasks::Task* AddPendingEncryptedEndpointAsync(::System::Net::IPEndPoint*  endPoint, ::ArrayW<uint8_t,::Array<uint8_t>*>  preMasterSecret, ::ArrayW<uint8_t,::Array<uint8_t>*>  serverRandom, ::ArrayW<uint8_t,::Array<uint8_t>*>  clientRandom, bool  isClient) ;

/// @brief Method PollUpdate addr 0xe4f038 size 0x1b4 virtual false final false
inline void PollUpdate() ;

/// @brief Method RemoveAllEndpoints addr 0xe4f1ec size 0x1b4 virtual false final false
inline void RemoveAllEndpoints() ;

/// @brief Method TryGetEncryptionState addr 0xe4f3a0 size 0x120 virtual false final false
inline bool TryGetEncryptionState(::System::Net::IPEndPoint*  endPoint, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  state) ;

/// @brief Method TryGetPendingEncryptionState addr 0xe4f4c0 size 0x158 virtual false final false
inline bool TryGetPendingEncryptionState(::System::Net::IPEndPoint*  endPoint, ByRef<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>  state) ;

/// @brief Method TryGetPotentialPendingEncryptionStates addr 0xe4f804 size 0x15c virtual false final false
inline bool TryGetPotentialPendingEncryptionStates(::System::Net::IPEndPoint*  endPoint, ByRef<::ArrayW<::GlobalNamespace::__EncryptionUtility__IEncryptionState*,::Array<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>*>>  encryptionStates) ;

/// @brief Method PromotePendingEncryptionState addr 0xe4fb24 size 0x2b0 virtual false final false
inline void PromotePendingEncryptionState(::System::Net::IPEndPoint*  endPoint, ::GlobalNamespace::__EncryptionUtility__IEncryptionState*  state) ;

/// @brief Method MatchesFilter addr 0xe4ff48 size 0x78 virtual false final false
inline bool MatchesFilter(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  offset, int32_t  length) ;

/// @brief Method ProcessInboundPacketInternal addr 0xe4e1e4 size 0x31c virtual false final false
inline bool ProcessInboundPacketInternal(::System::Net::IPEndPoint*  remoteEndPoint, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  data, ByRef<int32_t>  offset, ByRef<int32_t>  length, ByRef<bool>  encrypted) ;

/// @brief Method ProcessOutBoundPacketInternal addr 0xe4e6c8 size 0x1e8 virtual false final false
inline bool ProcessOutBoundPacketInternal(::System::Net::IPEndPoint*  remoteEndPoint, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  data, ByRef<int32_t>  offset, ByRef<int32_t>  length, ByRef<bool>  encrypted) ;

/// @brief Method Log addr 0xe4ffc0 size 0x8c virtual false final false
static inline void Log(::StringW  message) ;

/// @brief Method LogV addr 0xe5004c size 0x8c virtual false final false
static inline void LogV(::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PacketEncryptionLayer(PacketEncryptionLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PacketEncryptionLayer(PacketEncryptionLayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PacketEncryptionLayer()  = default;
public:


// Fields

// Static field _stopwatch


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketEncryptionLayer, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PacketEncryptionLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketEncryptionLayer*, "", "PacketEncryptionLayer");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__EncryptionStatistics*, "", "PacketEncryptionLayer/EncryptionStatistics");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
NEED_NO_BOX(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0*, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__27");
