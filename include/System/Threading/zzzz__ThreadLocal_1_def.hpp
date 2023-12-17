#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ThreadLocal_1)
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__FinalizationHelper;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System::Threading {
template<typename T>
struct __ThreadLocal_1__LinkedSlotVolatile;
}
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__IdManager;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__LinkedSlot;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__FinalizationHelper;
}
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__IdManager;
}
namespace System::Threading {
template<typename T>
class __ThreadLocal_1__LinkedSlot;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class ThreadLocal_1<T>;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ThreadLocal_1__FinalizationHelper<T>;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ThreadLocal_1__IdManager<T>;
}
namespace System::Threading {
template<::il2cpp_utils::il2cpp_reference_type T>
class __ThreadLocal_1__LinkedSlot<T>;
}
namespace System::Threading {
template<typename T>
struct __ThreadLocal_1__LinkedSlotVolatile;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::ThreadLocal_1);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__FinalizationHelper);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__IdManager);
MARK_GEN_REF_PTR_T(::System::Threading::__ThreadLocal_1__LinkedSlot);
MARK_GEN_VAL_T(::System::Threading::__ThreadLocal_1__LinkedSlotVolatile);
// Type: ::LinkedSlotVolatile
namespace System::Threading {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2702))
// CS Name: ::ThreadLocal`1::LinkedSlotVolatile<T>
struct CORDL_TYPE __ThreadLocal_1__LinkedSlotVolatile : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Value offset 0x0
 __declspec(property(get=__get_Value, put=__set_Value)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  Value;

constexpr void __set_Value(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value) ;

constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* __get_Value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> __get_Value() const;

// Ctor Parameters [CppParam { name: "Value", ty: "::System::Threading::__ThreadLocal_1__LinkedSlot<T>*", modifiers: "", def_value: None }]
constexpr __ThreadLocal_1__LinkedSlotVolatile(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ThreadLocal_1__LinkedSlotVolatile(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ThreadLocal_1__LinkedSlotVolatile()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::LinkedSlot
// Type: ::IdManager
// Type: ::FinalizationHelper
// Type: System.Threading::ThreadLocal`1
// Type: ::LinkedSlot
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2703)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2703), inst: 2 })
// CS Name: ::ThreadLocal`1::LinkedSlot<T>*
class CORDL_TYPE __ThreadLocal_1__LinkedSlot<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field Next offset 0x10
 __declspec(property(get=__get_Next, put=__set_Next)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  Next;

/// @brief Field Previous offset 0x18
 __declspec(property(get=__get_Previous, put=__set_Previous)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  Previous;

/// @brief Field SlotArray offset 0x20
 __declspec(property(get=__get_SlotArray, put=__set_SlotArray)) ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  SlotArray;

/// @brief Field Value offset 0x28
 __declspec(property(get=__get_Value, put=__set_Value)) T  Value;

constexpr void __set_Next(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value) ;

constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* __get_Next() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> __get_Next() const;

constexpr void __set_Previous(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value) ;

constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* __get_Previous() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> __get_Previous() const;

constexpr void __set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value) ;

constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& __get_SlotArray() ;

constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& __get_SlotArray() const;

constexpr void __set_Value(T  value) ;

constexpr T& __get_Value() ;

constexpr T const& __get_Value() const;

static inline ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray) ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__LinkedSlot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadLocal_1__LinkedSlot(__ThreadLocal_1__LinkedSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__LinkedSlot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadLocal_1__LinkedSlot(__ThreadLocal_1__LinkedSlot const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadLocal_1__LinkedSlot()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::IdManager
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2704))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2704), inst: 2 })
// CS Name: ::ThreadLocal`1::IdManager<T>*
class CORDL_TYPE __ThreadLocal_1__IdManager<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_nextIdToTry offset 0x10
 __declspec(property(get=__get_m_nextIdToTry, put=__set_m_nextIdToTry)) int32_t  m_nextIdToTry;

/// @brief Field m_freeIds offset 0x18
 __declspec(property(get=__get_m_freeIds, put=__set_m_freeIds)) ::System::Collections::Generic::List_1<bool>*  m_freeIds;

constexpr void __set_m_nextIdToTry(int32_t  value) ;

constexpr int32_t& __get_m_nextIdToTry() ;

constexpr int32_t const& __get_m_nextIdToTry() const;

constexpr void __set_m_freeIds(::System::Collections::Generic::List_1<bool>*  value) ;

constexpr ::System::Collections::Generic::List_1<bool>* __get_m_freeIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> __get_m_freeIds() const;

/// @brief Method GetId addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t GetId() ;

/// @brief Method ReturnId addr 0x0 size 0xffffffffffffffff virtual false final false
inline void ReturnId(int32_t  id) ;

static inline ::System::Threading::__ThreadLocal_1__IdManager<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__IdManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadLocal_1__IdManager(__ThreadLocal_1__IdManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__IdManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadLocal_1__IdManager(__ThreadLocal_1__IdManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadLocal_1__IdManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::FinalizationHelper
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2705))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2705), inst: 2 })
// CS Name: ::ThreadLocal`1::FinalizationHelper<T>*
class CORDL_TYPE __ThreadLocal_1__FinalizationHelper<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field SlotArray offset 0x10
 __declspec(property(get=__get_SlotArray, put=__set_SlotArray)) ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  SlotArray;

/// @brief Field m_trackAllValues offset 0x18
 __declspec(property(get=__get_m_trackAllValues, put=__set_m_trackAllValues)) bool  m_trackAllValues;

constexpr void __set_SlotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value) ;

constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>& __get_SlotArray() ;

constexpr ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> const& __get_SlotArray() const;

constexpr void __set_m_trackAllValues(bool  value) ;

constexpr bool& __get_m_trackAllValues() ;

constexpr bool const& __get_m_trackAllValues() const;

static inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* New_ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, bool  trackAllValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, bool  trackAllValues) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Finalize() ;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__FinalizationHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ThreadLocal_1__FinalizationHelper(__ThreadLocal_1__FinalizationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ThreadLocal_1__FinalizationHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ThreadLocal_1__FinalizationHelper(__ThreadLocal_1__FinalizationHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ThreadLocal_1__FinalizationHelper()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::ThreadLocal`1
namespace System::Threading {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2706))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2706), inst: 2 })
// CS Name: ::System.Threading::ThreadLocal`1<T>*
class CORDL_TYPE ThreadLocal_1<T> : public ::System::Object {
public:
// Declarations
using FinalizationHelper = ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>;

using IdManager = ::System::Threading::__ThreadLocal_1__IdManager<T>;

using LinkedSlot = ::System::Threading::__ThreadLocal_1__LinkedSlot<T>;

using LinkedSlotVolatile = ::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_valueFactory offset 0x10
 __declspec(property(get=__get_m_valueFactory, put=__set_m_valueFactory)) ::System::Func_1<T>*  m_valueFactory;

/// @brief Field m_idComplement offset 0x18
 __declspec(property(get=__get_m_idComplement, put=__set_m_idComplement)) int32_t  m_idComplement;

/// @brief Field m_initialized offset 0x1c
 __declspec(property(get=__get_m_initialized, put=__set_m_initialized)) bool  m_initialized;

/// @brief Field m_linkedSlot offset 0x20
 __declspec(property(get=__get_m_linkedSlot, put=__set_m_linkedSlot)) ::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  m_linkedSlot;

/// @brief Field m_trackAllValues offset 0x28
 __declspec(property(get=__get_m_trackAllValues, put=__set_m_trackAllValues)) bool  m_trackAllValues;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

 __declspec(property(get=get_IsValueCreated)) bool  IsValueCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_m_valueFactory(::System::Func_1<T>*  value) ;

constexpr ::System::Func_1<T>* __get_m_valueFactory() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> __get_m_valueFactory() const;

static inline void setStaticF_ts_slotArray(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  value) ;

static inline ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*> getStaticF_ts_slotArray() ;

static inline void setStaticF_ts_finalizationHelper(::System::Threading::__ThreadLocal_1__FinalizationHelper<T>*  value) ;

static inline ::System::Threading::__ThreadLocal_1__FinalizationHelper<T>* getStaticF_ts_finalizationHelper() ;

constexpr void __set_m_idComplement(int32_t  value) ;

constexpr int32_t& __get_m_idComplement() ;

constexpr int32_t const& __get_m_idComplement() const;

constexpr void __set_m_initialized(bool  value) ;

constexpr bool& __get_m_initialized() ;

constexpr bool const& __get_m_initialized() const;

static inline void setStaticF_s_idManager(::System::Threading::__ThreadLocal_1__IdManager<T>*  value) ;

static inline ::System::Threading::__ThreadLocal_1__IdManager<T>* getStaticF_s_idManager() ;

constexpr void __set_m_linkedSlot(::System::Threading::__ThreadLocal_1__LinkedSlot<T>*  value) ;

constexpr ::System::Threading::__ThreadLocal_1__LinkedSlot<T>* __get_m_linkedSlot() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::__ThreadLocal_1__LinkedSlot<T>*> __get_m_linkedSlot() const;

constexpr void __set_m_trackAllValues(bool  value) ;

constexpr bool& __get_m_trackAllValues() ;

constexpr bool const& __get_m_trackAllValues() const;

static inline ::System::Threading::ThreadLocal_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Initialize(::System::Func_1<T>*  valueFactory, bool  trackAllValues) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Value(T  value) ;

/// @brief Method GetValueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
inline T GetValueSlow() ;

/// @brief Method SetValueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetValueSlow(T  value, ::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray) ;

/// @brief Method CreateLinkedSlot addr 0x0 size 0xffffffffffffffff virtual false final false
inline void CreateLinkedSlot(::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>  slotArray, int32_t  id, T  value) ;

/// @brief Method get_IsValueCreated addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsValueCreated() ;

/// @brief Method GrowTable addr 0x0 size 0xffffffffffffffff virtual false final false
inline void GrowTable(ByRef<::ArrayW<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>,::Array<::System::Threading::__ThreadLocal_1__LinkedSlotVolatile<T>>*>>  table, int32_t  minLength) ;

/// @brief Method GetNewTableSize addr 0x0 size 0xffffffffffffffff virtual false final false
static inline int32_t GetNewTableSize(int32_t  minSize) ;

// Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadLocal_1(ThreadLocal_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadLocal_1(ThreadLocal_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ThreadLocal_1()  = default;
public:


// Fields

// Static field ts_slotArray

// Static field ts_finalizationHelper

// Static field s_idManager


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::ThreadLocal_1, "System.Threading", "ThreadLocal`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__FinalizationHelper, "System.Threading", "ThreadLocal`1/FinalizationHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__IdManager, "System.Threading", "ThreadLocal`1/IdManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::__ThreadLocal_1__LinkedSlot, "System.Threading", "ThreadLocal`1/LinkedSlot");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Threading::__ThreadLocal_1__LinkedSlotVolatile, "System.Threading", "ThreadLocal`1/LinkedSlotVolatile");
