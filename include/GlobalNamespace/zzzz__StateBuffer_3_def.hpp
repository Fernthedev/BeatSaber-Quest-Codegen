#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateBuffer_3)
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class __StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class __StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class __StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class __StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
class __StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct __StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
struct __StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
struct __StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::StateBuffer_3);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate);
MARK_GEN_REF_PTR_T(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate);
MARK_GEN_VAL_T(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable);
// Type: ::TimestampedStateTable
// Type: ::InterpolationDelegate
// Type: ::SmoothingDelegate
// Type: ::StateBuffer`3
// Type: ::TimestampedStateTable
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12982), inst: 5153 })
// CS Name: ::StateBuffer`3::TimestampedStateTable<TStateTable,TType,TState>
struct CORDL_TYPE __StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field isValid offset 0x0
 __declspec(property(get=__get_isValid, put=__set_isValid)) bool  isValid;

/// @brief Field id offset 0x1
 __declspec(property(get=__get_id, put=__set_id)) ::GlobalNamespace::SyncStateId  id;

/// @brief Field time offset 0x8
 __declspec(property(get=__get_time, put=__set_time)) int64_t  time;

/// @brief Field state offset 0x10
 __declspec(property(get=__get_state, put=__set_state)) ::GlobalNamespace::StandardScoreSyncState  state;

/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>"
constexpr operator  ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*() ;

constexpr void __set_isValid(bool  value) ;

constexpr bool& __get_isValid() ;

constexpr bool const& __get_isValid() const;

constexpr void __set_id(::GlobalNamespace::SyncStateId  value) ;

constexpr ::GlobalNamespace::SyncStateId& __get_id() ;

constexpr ::GlobalNamespace::SyncStateId const& __get_id() const;

constexpr void __set_time(int64_t  value) ;

constexpr int64_t& __get_time() ;

constexpr int64_t const& __get_time() const;

constexpr void __set_state(::GlobalNamespace::StandardScoreSyncState  value) ;

constexpr ::GlobalNamespace::StandardScoreSyncState& __get_state() ;

constexpr ::GlobalNamespace::StandardScoreSyncState const& __get_state() const;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>  other) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state) ;

/// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>  other) ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::GlobalNamespace::StandardScoreSyncState", modifiers: "", def_value: None }]
constexpr __StateBuffer_3__TimestampedStateTable(bool  isValid, ::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::StandardScoreSyncState  state) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StateBuffer_3__TimestampedStateTable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__TimestampedStateTable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimestampedStateTable
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12982), inst: 5152 })
// CS Name: ::StateBuffer`3::TimestampedStateTable<TStateTable,TType,TState>
struct CORDL_TYPE __StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::bs_hook::ValueTypeWrapper<0x58> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field isValid offset 0x0
 __declspec(property(get=__get_isValid, put=__set_isValid)) bool  isValid;

/// @brief Field id offset 0x1
 __declspec(property(get=__get_id, put=__set_id)) ::GlobalNamespace::SyncStateId  id;

/// @brief Field time offset 0x8
 __declspec(property(get=__get_time, put=__set_time)) int64_t  time;

/// @brief Field state offset 0x10
 __declspec(property(get=__get_state, put=__set_state)) ::GlobalNamespace::NodePoseSyncState  state;

/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>"
constexpr operator  ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*() ;

constexpr void __set_isValid(bool  value) ;

constexpr bool& __get_isValid() ;

constexpr bool const& __get_isValid() const;

constexpr void __set_id(::GlobalNamespace::SyncStateId  value) ;

constexpr ::GlobalNamespace::SyncStateId& __get_id() ;

constexpr ::GlobalNamespace::SyncStateId const& __get_id() const;

constexpr void __set_time(int64_t  value) ;

constexpr int64_t& __get_time() ;

constexpr int64_t const& __get_time() const;

constexpr void __set_state(::GlobalNamespace::NodePoseSyncState  value) ;

constexpr ::GlobalNamespace::NodePoseSyncState& __get_state() ;

constexpr ::GlobalNamespace::NodePoseSyncState const& __get_state() const;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>  other) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::NodePoseSyncState  state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int64_t  time, ::GlobalNamespace::NodePoseSyncState  state) ;

/// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool IEquatableByReference_StateBuffer_TStateTable_TType_TState__TimestampedStateTable__Equals(ByRef<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>  other) ;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam { name: "time", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "::GlobalNamespace::NodePoseSyncState", modifiers: "", def_value: None }]
constexpr __StateBuffer_3__TimestampedStateTable(bool  isValid, ::GlobalNamespace::SyncStateId  id, int64_t  time, ::GlobalNamespace::NodePoseSyncState  state) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __StateBuffer_3__TimestampedStateTable(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x58>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__TimestampedStateTable()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InterpolationDelegate
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12983)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12983), inst: 5153 })
// CS Name: ::StateBuffer`3::InterpolationDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Invoke(int32_t  a, int64_t  timeA, int32_t  b, int64_t  timeB, int64_t  time) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  a, int64_t  timeA, int32_t  b, int64_t  timeB, int64_t  time, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__InterpolationDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InterpolationDelegate
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12983)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12983), inst: 5152 })
// CS Name: ::StateBuffer`3::InterpolationDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable Invoke(::GlobalNamespace::PoseSerializable  a, int64_t  timeA, ::GlobalNamespace::PoseSerializable  b, int64_t  timeB, int64_t  time) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PoseSerializable  a, int64_t  timeA, ::GlobalNamespace::PoseSerializable  b, int64_t  timeB, int64_t  time, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__InterpolationDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StateBuffer_3__InterpolationDelegate(__StateBuffer_3__InterpolationDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__InterpolationDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SmoothingDelegate
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12984)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12984), inst: 5153 })
// CS Name: ::StateBuffer`3::SmoothingDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Invoke(int32_t  a, int32_t  b, float_t  smooth) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  a, int32_t  b, float_t  smooth, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__SmoothingDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SmoothingDelegate
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12984)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12984), inst: 5152 })
// CS Name: ::StateBuffer`3::SmoothingDelegate<TStateTable,TType,TState>*
class CORDL_TYPE __StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable Invoke(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  smooth) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PoseSerializable  a, ::GlobalNamespace::PoseSerializable  b, float_t  smooth, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::PoseSerializable EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__StateBuffer_3__SmoothingDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__StateBuffer_3__SmoothingDelegate(__StateBuffer_3__SmoothingDelegate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __StateBuffer_3__SmoothingDelegate()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12985)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 5153 })
// CS Name: ::StateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t> : public ::System::Object {
public:
// Declarations
using SmoothingDelegate = ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState, TType, int32_t>;

using InterpolationDelegate = ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState, TType, int32_t>;

using TimestampedStateTable = ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState, TType, int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _currentIndex offset 0x10
 __declspec(property(get=__get__currentIndex, put=__set__currentIndex)) int32_t  _currentIndex;

/// @brief Field _buffer offset 0x18
 __declspec(property(get=__get__buffer, put=__set__buffer)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  _buffer;

/// @brief Field _interpolator offset 0x20
 __declspec(property(get=__get__interpolator, put=__set__interpolator)) ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  _interpolator;

/// @brief Field _smoother offset 0x28
 __declspec(property(get=__get__smoother, put=__set__smoother)) ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  _smoother;

constexpr void __set__currentIndex(int32_t  value) ;

constexpr int32_t& __get__currentIndex() ;

constexpr int32_t const& __get__currentIndex() const;

constexpr void __set__buffer(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*>& __get__buffer() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>>*> const& __get__buffer() const;

constexpr void __set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* __get__interpolator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> __get__interpolator() const;

constexpr void __set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* __get__smoother() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*> __get__smoother() const;

static inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>* New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::StandardScoreSyncState,TType,int32_t>*  smoother) ;

/// @brief Method GetPreviousIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetPreviousIndex(int32_t  offset) ;

/// @brief Method InsertState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InsertState(ByRef<::GlobalNamespace::StandardScoreSyncState>  state, int64_t  time) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetState(TType  type, int64_t  time) ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetLatestState(TType  type) ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetLatestTime() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateBuffer_3(StateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateBuffer_3(StateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StateBuffer`3
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> TType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12985))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12985), inst: 5152 })
// CS Name: ::StateBuffer`3<TStateTable,TType,TState>*
class CORDL_TYPE StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable> : public ::System::Object {
public:
// Declarations
using SmoothingDelegate = ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState, TType, ::GlobalNamespace::PoseSerializable>;

using InterpolationDelegate = ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState, TType, ::GlobalNamespace::PoseSerializable>;

using TimestampedStateTable = ::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState, TType, ::GlobalNamespace::PoseSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _currentIndex offset 0x10
 __declspec(property(get=__get__currentIndex, put=__set__currentIndex)) int32_t  _currentIndex;

/// @brief Field _buffer offset 0x18
 __declspec(property(get=__get__buffer, put=__set__buffer)) ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  _buffer;

/// @brief Field _interpolator offset 0x20
 __declspec(property(get=__get__interpolator, put=__set__interpolator)) ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  _interpolator;

/// @brief Field _smoother offset 0x28
 __declspec(property(get=__get__smoother, put=__set__smoother)) ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  _smoother;

constexpr void __set__currentIndex(int32_t  value) ;

constexpr int32_t& __get__currentIndex() ;

constexpr int32_t const& __get__currentIndex() const;

constexpr void __set__buffer(::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*>& __get__buffer() ;

constexpr ::ArrayW<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>,::Array<::GlobalNamespace::__StateBuffer_3__TimestampedStateTable<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>>*> const& __get__buffer() const;

constexpr void __set__interpolator(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* __get__interpolator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> __get__interpolator() const;

constexpr void __set__smoother(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  value) ;

constexpr ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* __get__smoother() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*> __get__smoother() const;

static inline ::GlobalNamespace::StateBuffer_3<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>* New_ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  size, ::GlobalNamespace::__StateBuffer_3__InterpolationDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  interpolator, ::GlobalNamespace::__StateBuffer_3__SmoothingDelegate<::GlobalNamespace::NodePoseSyncState,TType,::GlobalNamespace::PoseSerializable>*  smoother) ;

/// @brief Method GetPreviousIndex addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetPreviousIndex(int32_t  offset) ;

/// @brief Method InsertState addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InsertState(ByRef<::GlobalNamespace::NodePoseSyncState>  state, int64_t  time) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::PoseSerializable GetState(TType  type, int64_t  time) ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::GlobalNamespace::PoseSerializable GetLatestState(TType  type) ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t GetLatestTime() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StateBuffer_3(StateBuffer_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StateBuffer_3(StateBuffer_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StateBuffer_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::StateBuffer_3, "", "StateBuffer`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StateBuffer_3__InterpolationDelegate, "", "StateBuffer`3/InterpolationDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::__StateBuffer_3__SmoothingDelegate, "", "StateBuffer`3/SmoothingDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::__StateBuffer_3__TimestampedStateTable, "", "StateBuffer`3/TimestampedStateTable");
