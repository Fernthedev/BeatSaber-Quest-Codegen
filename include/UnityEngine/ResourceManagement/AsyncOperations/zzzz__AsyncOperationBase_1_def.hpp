#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationBase_1)
namespace GlobalNamespace {
template<typename T>
class DelegateList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IAsyncOperation;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class __AsyncOperationBase_1____c__DisplayClass57_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class __AsyncOperationBase_1____c__DisplayClass58_0;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationStatus;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class AsyncOperationBase_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class __AsyncOperationBase_1____c__DisplayClass57_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
class __AsyncOperationBase_1____c__DisplayClass58_0;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class AsyncOperationBase_1<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class AsyncOperationBase_1<bool>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class AsyncOperationBase_1<int64_t>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass57_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class __AsyncOperationBase_1____c__DisplayClass57_0<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass57_0<bool>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass57_0<int64_t>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass58_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<::il2cpp_utils::il2cpp_reference_type TObject>
class __AsyncOperationBase_1____c__DisplayClass58_0<TObject>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass58_0<bool>;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<>
class __AsyncOperationBase_1____c__DisplayClass58_0<int64_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0);
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0);
// Type: ::<>c__DisplayClass57_0
// Type: ::<>c__DisplayClass58_0
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1
// Type: ::<>c__DisplayClass57_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14030))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14030), inst: 797 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass57_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass57_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <add_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _add_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass57_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass57_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14030))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14030), inst: 333 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass57_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass57_0<int64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <add_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _add_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass57_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass57_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14030)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14030), inst: 105 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass57_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass57_0<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <add_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _add_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass57_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass57_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14030))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14030), inst: 2 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass57_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass57_0<TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <add_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _add_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass57_0(__AsyncOperationBase_1____c__DisplayClass57_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass57_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass58_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14031))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14031), inst: 797 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass58_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass58_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <remove_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _remove_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass58_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass58_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14031)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14031), inst: 333 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass58_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass58_0<int64_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <remove_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _remove_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass58_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass58_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14031))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14031), inst: 105 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass58_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass58_0<bool> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <remove_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _remove_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass58_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: ::<>c__DisplayClass58_0
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14031))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14031), inst: 2 })
// CS Name: ::AsyncOperationBase`1::<>c__DisplayClass58_0<TObject>*
class CORDL_TYPE __AsyncOperationBase_1____c__DisplayClass58_0<TObject> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value;

constexpr void __set_value(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_value() const;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <remove_CompletedTypeless>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _remove_CompletedTypeless_b__0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  s) ;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AsyncOperationBase_1____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AsyncOperationBase_1____c__DisplayClass58_0(__AsyncOperationBase_1____c__DisplayClass58_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AsyncOperationBase_1____c__DisplayClass58_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 797 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1<TObject>*
class CORDL_TYPE AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass58_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;

using __c__DisplayClass57_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Object)]{};

/// @brief Field <Result>k__BackingField offset 0x10
 __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  _Result_k__BackingField;

/// @brief Field m_referenceCount offset 0x20
 __declspec(property(get=__get_m_referenceCount, put=__set_m_referenceCount)) int32_t  m_referenceCount;

/// @brief Field m_Status offset 0x24
 __declspec(property(get=__get_m_Status, put=__set_m_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  m_Status;

/// @brief Field m_Error offset 0x28
 __declspec(property(get=__get_m_Error, put=__set_m_Error)) ::System::Exception*  m_Error;

/// @brief Field m_RM offset 0x30
 __declspec(property(get=__get_m_RM, put=__set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager*  m_RM;

/// @brief Field m_Version offset 0x38
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_DestroyedAction offset 0x40
 __declspec(property(get=__get_m_DestroyedAction, put=__set_m_DestroyedAction)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_DestroyedAction;

/// @brief Field m_CompletedActionT offset 0x48
 __declspec(property(get=__get_m_CompletedActionT, put=__set_m_CompletedActionT)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  m_CompletedActionT;

/// @brief Field m_OnDestroyAction offset 0x50
 __declspec(property(get=__get_m_OnDestroyAction, put=__set_m_OnDestroyAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_OnDestroyAction;

/// @brief Field m_dependencyCompleteAction offset 0x58
 __declspec(property(get=__get_m_dependencyCompleteAction, put=__set_m_dependencyCompleteAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_dependencyCompleteAction;

/// @brief Field HasExecuted offset 0x60
 __declspec(property(get=__get_HasExecuted, put=__set_HasExecuted)) bool  HasExecuted;

/// @brief Field <IsRunning>k__BackingField offset 0x61
 __declspec(property(get=__get__IsRunning_k__BackingField, put=__set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field m_taskCompletionSource offset 0x68
 __declspec(property(get=__get_m_taskCompletionSource, put=__set_m_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  m_taskCompletionSource;

/// @brief Field m_taskCompletionSourceTypeless offset 0x70
 __declspec(property(get=__get_m_taskCompletionSourceTypeless, put=__set_m_taskCompletionSourceTypeless)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  m_taskCompletionSourceTypeless;

/// @brief Field m_InDeferredCallbackQueue offset 0x78
 __declspec(property(get=__get_m_InDeferredCallbackQueue, put=__set_m_InDeferredCallbackQueue)) bool  m_InDeferredCallbackQueue;

/// @brief Field m_UpdateCallbacks offset 0x80
 __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>*  m_UpdateCallbacks;

/// @brief Field m_UpdateCallback offset 0x88
 __declspec(property(get=__get_m_UpdateCallback, put=__set_m_UpdateCallback)) ::System::Action_1<float_t>*  m_UpdateCallback;

 __declspec(property(get=get_Progress)) float_t  Progress;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Result, put=set_Result)) ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  Result;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_CompletedEventHasListeners)) bool  CompletedEventHasListeners;

 __declspec(property(get=get_DestroyedEventHasListeners)) bool  DestroyedEventHasListeners;

 __declspec(property(put=set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  OnDestroy;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  Task;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Task;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_OperationException, put=set_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  Handle;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Version;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ReferenceCount;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)) float_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_PercentComplete;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Status;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)) ::System::Exception*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OperationException;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)) bool  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IsDone;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Handle;

 __declspec(property(put=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OnDestroy;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)) ::StringW  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DebugName;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)) ::System::Type*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ResultType;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept;

constexpr void __set__Result_k__BackingField(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance& __get__Result_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance const& __get__Result_k__BackingField() const;

constexpr void __set_m_referenceCount(int32_t  value) ;

constexpr int32_t& __get_m_referenceCount() ;

constexpr int32_t const& __get_m_referenceCount() const;

constexpr void __set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& __get_m_Status() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& __get_m_Status() const;

constexpr void __set_m_Error(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Error() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Error() const;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_RM() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_RM() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_DestroyedAction(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_DestroyedAction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_DestroyedAction() const;

constexpr void __set_m_CompletedActionT(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>* __get_m_CompletedActionT() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*> __get_m_CompletedActionT() const;

constexpr void __set_m_OnDestroyAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_OnDestroyAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_OnDestroyAction() const;

constexpr void __set_m_dependencyCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_dependencyCompleteAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_dependencyCompleteAction() const;

constexpr void __set_HasExecuted(bool  value) ;

constexpr bool& __get_HasExecuted() ;

constexpr bool const& __get_HasExecuted() const;

constexpr void __set__IsRunning_k__BackingField(bool  value) ;

constexpr bool& __get__IsRunning_k__BackingField() ;

constexpr bool const& __get__IsRunning_k__BackingField() const;

constexpr void __set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* __get_m_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>*> __get_m_taskCompletionSource() const;

constexpr void __set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* __get_m_taskCompletionSourceTypeless() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> __get_m_taskCompletionSourceTypeless() const;

constexpr void __set_m_InDeferredCallbackQueue(bool  value) ;

constexpr bool& __get_m_InDeferredCallbackQueue() ;

constexpr bool const& __get_m_InDeferredCallbackQueue() const;

constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<float_t>* __get_m_UpdateCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> __get_m_UpdateCallbacks() const;

constexpr void __set_m_UpdateCallback(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_m_UpdateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_m_UpdateCallback() const;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  dependencies) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance get_Result() ;

/// @brief Method set_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Result(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  value) ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_CompletedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_CompletedEventHasListeners() ;

/// @brief Method get_DestroyedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_DestroyedEventHasListeners() ;

/// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsRunning() ;

/// @brief Method set_IsRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_IsRunning(bool  value) ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method ShortenPath addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::StringW ShortenPath(::StringW  p, bool  keepExtension) ;

/// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncrementReferenceCount() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final true
inline void WaitForCompletion() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DecrementReferenceCount() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>* get_Task() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method RegisterForDeferredCallbackEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterForDeferredCallbackEvent(bool  incrementReferenceCount) ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>>*  value) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method set_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OperationException(::System::Exception*  value) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Object* get_Current() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCompletionEvent() ;

/// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> get_Handle() ;

/// @brief Method UpdateCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateCallback(float_t  unscaledDeltaTime) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method InvokeExecute addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeExecute() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Exception* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method <.ctor>b__35_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__35_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationBase_1(AsyncOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationBase_1(AsyncOperationBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncOperationBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 333 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1<TObject>*
class CORDL_TYPE AsyncOperationBase_1<int64_t> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass58_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<int64_t>;

using __c__DisplayClass57_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<int64_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field <Result>k__BackingField offset 0x10
 __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField)) int64_t  _Result_k__BackingField;

/// @brief Field m_referenceCount offset 0x18
 __declspec(property(get=__get_m_referenceCount, put=__set_m_referenceCount)) int32_t  m_referenceCount;

/// @brief Field m_Status offset 0x1c
 __declspec(property(get=__get_m_Status, put=__set_m_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  m_Status;

/// @brief Field m_Error offset 0x20
 __declspec(property(get=__get_m_Error, put=__set_m_Error)) ::System::Exception*  m_Error;

/// @brief Field m_RM offset 0x28
 __declspec(property(get=__get_m_RM, put=__set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager*  m_RM;

/// @brief Field m_Version offset 0x30
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_DestroyedAction offset 0x38
 __declspec(property(get=__get_m_DestroyedAction, put=__set_m_DestroyedAction)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_DestroyedAction;

/// @brief Field m_CompletedActionT offset 0x40
 __declspec(property(get=__get_m_CompletedActionT, put=__set_m_CompletedActionT)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  m_CompletedActionT;

/// @brief Field m_OnDestroyAction offset 0x48
 __declspec(property(get=__get_m_OnDestroyAction, put=__set_m_OnDestroyAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_OnDestroyAction;

/// @brief Field m_dependencyCompleteAction offset 0x50
 __declspec(property(get=__get_m_dependencyCompleteAction, put=__set_m_dependencyCompleteAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_dependencyCompleteAction;

/// @brief Field HasExecuted offset 0x58
 __declspec(property(get=__get_HasExecuted, put=__set_HasExecuted)) bool  HasExecuted;

/// @brief Field <IsRunning>k__BackingField offset 0x59
 __declspec(property(get=__get__IsRunning_k__BackingField, put=__set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field m_taskCompletionSource offset 0x60
 __declspec(property(get=__get_m_taskCompletionSource, put=__set_m_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>*  m_taskCompletionSource;

/// @brief Field m_taskCompletionSourceTypeless offset 0x68
 __declspec(property(get=__get_m_taskCompletionSourceTypeless, put=__set_m_taskCompletionSourceTypeless)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  m_taskCompletionSourceTypeless;

/// @brief Field m_InDeferredCallbackQueue offset 0x70
 __declspec(property(get=__get_m_InDeferredCallbackQueue, put=__set_m_InDeferredCallbackQueue)) bool  m_InDeferredCallbackQueue;

/// @brief Field m_UpdateCallbacks offset 0x78
 __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>*  m_UpdateCallbacks;

/// @brief Field m_UpdateCallback offset 0x80
 __declspec(property(get=__get_m_UpdateCallback, put=__set_m_UpdateCallback)) ::System::Action_1<float_t>*  m_UpdateCallback;

 __declspec(property(get=get_Progress)) float_t  Progress;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Result, put=set_Result)) int64_t  Result;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_CompletedEventHasListeners)) bool  CompletedEventHasListeners;

 __declspec(property(get=get_DestroyedEventHasListeners)) bool  DestroyedEventHasListeners;

 __declspec(property(put=set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  OnDestroy;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<int64_t>*  Task;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Task;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_OperationException, put=set_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>  Handle;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Version;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ReferenceCount;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)) float_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_PercentComplete;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Status;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)) ::System::Exception*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OperationException;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)) bool  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IsDone;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Handle;

 __declspec(property(put=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OnDestroy;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)) ::StringW  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DebugName;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)) ::System::Type*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ResultType;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept;

constexpr void __set__Result_k__BackingField(int64_t  value) ;

constexpr int64_t& __get__Result_k__BackingField() ;

constexpr int64_t const& __get__Result_k__BackingField() const;

constexpr void __set_m_referenceCount(int32_t  value) ;

constexpr int32_t& __get_m_referenceCount() ;

constexpr int32_t const& __get_m_referenceCount() const;

constexpr void __set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& __get_m_Status() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& __get_m_Status() const;

constexpr void __set_m_Error(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Error() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Error() const;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_RM() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_RM() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_DestroyedAction(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_DestroyedAction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_DestroyedAction() const;

constexpr void __set_m_CompletedActionT(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>* __get_m_CompletedActionT() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*> __get_m_CompletedActionT() const;

constexpr void __set_m_OnDestroyAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_OnDestroyAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_OnDestroyAction() const;

constexpr void __set_m_dependencyCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_dependencyCompleteAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_dependencyCompleteAction() const;

constexpr void __set_HasExecuted(bool  value) ;

constexpr bool& __get_HasExecuted() ;

constexpr bool const& __get_HasExecuted() const;

constexpr void __set__IsRunning_k__BackingField(bool  value) ;

constexpr bool& __get__IsRunning_k__BackingField() ;

constexpr bool const& __get__IsRunning_k__BackingField() const;

constexpr void __set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<int64_t>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int64_t>* __get_m_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int64_t>*> __get_m_taskCompletionSource() const;

constexpr void __set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* __get_m_taskCompletionSourceTypeless() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> __get_m_taskCompletionSourceTypeless() const;

constexpr void __set_m_InDeferredCallbackQueue(bool  value) ;

constexpr bool& __get_m_InDeferredCallbackQueue() ;

constexpr bool const& __get_m_InDeferredCallbackQueue() const;

constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<float_t>* __get_m_UpdateCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> __get_m_UpdateCallbacks() const;

constexpr void __set_m_UpdateCallback(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_m_UpdateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_m_UpdateCallback() const;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  dependencies) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline int64_t get_Result() ;

/// @brief Method set_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Result(int64_t  value) ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_CompletedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_CompletedEventHasListeners() ;

/// @brief Method get_DestroyedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_DestroyedEventHasListeners() ;

/// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsRunning() ;

/// @brief Method set_IsRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_IsRunning(bool  value) ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<int64_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method ShortenPath addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::StringW ShortenPath(::StringW  p, bool  keepExtension) ;

/// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncrementReferenceCount() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final true
inline void WaitForCompletion() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DecrementReferenceCount() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<int64_t>* get_Task() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method RegisterForDeferredCallbackEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterForDeferredCallbackEvent(bool  incrementReferenceCount) ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t>>*  value) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method set_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OperationException(::System::Exception*  value) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Object* get_Current() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCompletionEvent() ;

/// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> get_Handle() ;

/// @brief Method UpdateCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateCallback(float_t  unscaledDeltaTime) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(int64_t  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(int64_t  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(int64_t  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method InvokeExecute addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeExecute() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Exception* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method <.ctor>b__35_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__35_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationBase_1(AsyncOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationBase_1(AsyncOperationBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncOperationBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14032))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 105 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1<TObject>*
class CORDL_TYPE AsyncOperationBase_1<bool> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass58_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<bool>;

using __c__DisplayClass57_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<bool>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field <Result>k__BackingField offset 0x10
 __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField)) bool  _Result_k__BackingField;

/// @brief Field m_referenceCount offset 0x14
 __declspec(property(get=__get_m_referenceCount, put=__set_m_referenceCount)) int32_t  m_referenceCount;

/// @brief Field m_Status offset 0x18
 __declspec(property(get=__get_m_Status, put=__set_m_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  m_Status;

/// @brief Field m_Error offset 0x20
 __declspec(property(get=__get_m_Error, put=__set_m_Error)) ::System::Exception*  m_Error;

/// @brief Field m_RM offset 0x28
 __declspec(property(get=__get_m_RM, put=__set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager*  m_RM;

/// @brief Field m_Version offset 0x30
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_DestroyedAction offset 0x38
 __declspec(property(get=__get_m_DestroyedAction, put=__set_m_DestroyedAction)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_DestroyedAction;

/// @brief Field m_CompletedActionT offset 0x40
 __declspec(property(get=__get_m_CompletedActionT, put=__set_m_CompletedActionT)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  m_CompletedActionT;

/// @brief Field m_OnDestroyAction offset 0x48
 __declspec(property(get=__get_m_OnDestroyAction, put=__set_m_OnDestroyAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_OnDestroyAction;

/// @brief Field m_dependencyCompleteAction offset 0x50
 __declspec(property(get=__get_m_dependencyCompleteAction, put=__set_m_dependencyCompleteAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_dependencyCompleteAction;

/// @brief Field HasExecuted offset 0x58
 __declspec(property(get=__get_HasExecuted, put=__set_HasExecuted)) bool  HasExecuted;

/// @brief Field <IsRunning>k__BackingField offset 0x59
 __declspec(property(get=__get__IsRunning_k__BackingField, put=__set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field m_taskCompletionSource offset 0x60
 __declspec(property(get=__get_m_taskCompletionSource, put=__set_m_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  m_taskCompletionSource;

/// @brief Field m_taskCompletionSourceTypeless offset 0x68
 __declspec(property(get=__get_m_taskCompletionSourceTypeless, put=__set_m_taskCompletionSourceTypeless)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  m_taskCompletionSourceTypeless;

/// @brief Field m_InDeferredCallbackQueue offset 0x70
 __declspec(property(get=__get_m_InDeferredCallbackQueue, put=__set_m_InDeferredCallbackQueue)) bool  m_InDeferredCallbackQueue;

/// @brief Field m_UpdateCallbacks offset 0x78
 __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>*  m_UpdateCallbacks;

/// @brief Field m_UpdateCallback offset 0x80
 __declspec(property(get=__get_m_UpdateCallback, put=__set_m_UpdateCallback)) ::System::Action_1<float_t>*  m_UpdateCallback;

 __declspec(property(get=get_Progress)) float_t  Progress;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Result, put=set_Result)) bool  Result;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_CompletedEventHasListeners)) bool  CompletedEventHasListeners;

 __declspec(property(get=get_DestroyedEventHasListeners)) bool  DestroyedEventHasListeners;

 __declspec(property(put=set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  OnDestroy;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<bool>*  Task;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Task;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_OperationException, put=set_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>  Handle;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Version;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ReferenceCount;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)) float_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_PercentComplete;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Status;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)) ::System::Exception*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OperationException;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)) bool  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IsDone;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Handle;

 __declspec(property(put=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OnDestroy;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)) ::StringW  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DebugName;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)) ::System::Type*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ResultType;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept;

constexpr void __set__Result_k__BackingField(bool  value) ;

constexpr bool& __get__Result_k__BackingField() ;

constexpr bool const& __get__Result_k__BackingField() const;

constexpr void __set_m_referenceCount(int32_t  value) ;

constexpr int32_t& __get_m_referenceCount() ;

constexpr int32_t const& __get_m_referenceCount() const;

constexpr void __set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& __get_m_Status() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& __get_m_Status() const;

constexpr void __set_m_Error(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Error() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Error() const;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_RM() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_RM() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_DestroyedAction(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_DestroyedAction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_DestroyedAction() const;

constexpr void __set_m_CompletedActionT(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>* __get_m_CompletedActionT() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*> __get_m_CompletedActionT() const;

constexpr void __set_m_OnDestroyAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_OnDestroyAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_OnDestroyAction() const;

constexpr void __set_m_dependencyCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_dependencyCompleteAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_dependencyCompleteAction() const;

constexpr void __set_HasExecuted(bool  value) ;

constexpr bool& __get_HasExecuted() ;

constexpr bool const& __get_HasExecuted() const;

constexpr void __set__IsRunning_k__BackingField(bool  value) ;

constexpr bool& __get__IsRunning_k__BackingField() ;

constexpr bool const& __get__IsRunning_k__BackingField() const;

constexpr void __set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* __get_m_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> __get_m_taskCompletionSource() const;

constexpr void __set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* __get_m_taskCompletionSourceTypeless() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> __get_m_taskCompletionSourceTypeless() const;

constexpr void __set_m_InDeferredCallbackQueue(bool  value) ;

constexpr bool& __get_m_InDeferredCallbackQueue() ;

constexpr bool const& __get_m_InDeferredCallbackQueue() const;

constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<float_t>* __get_m_UpdateCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> __get_m_UpdateCallbacks() const;

constexpr void __set_m_UpdateCallback(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_m_UpdateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_m_UpdateCallback() const;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  dependencies) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_Result() ;

/// @brief Method set_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Result(bool  value) ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_CompletedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_CompletedEventHasListeners() ;

/// @brief Method get_DestroyedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_DestroyedEventHasListeners() ;

/// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsRunning() ;

/// @brief Method set_IsRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_IsRunning(bool  value) ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method ShortenPath addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::StringW ShortenPath(::StringW  p, bool  keepExtension) ;

/// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncrementReferenceCount() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final true
inline void WaitForCompletion() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DecrementReferenceCount() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<bool>* get_Task() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method RegisterForDeferredCallbackEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterForDeferredCallbackEvent(bool  incrementReferenceCount) ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool>>*  value) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method set_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OperationException(::System::Exception*  value) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Object* get_Current() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCompletionEvent() ;

/// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> get_Handle() ;

/// @brief Method UpdateCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateCallback(float_t  unscaledDeltaTime) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(bool  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(bool  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(bool  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method InvokeExecute addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeExecute() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Exception* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method <.ctor>b__35_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__35_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationBase_1(AsyncOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationBase_1(AsyncOperationBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncOperationBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
// Type: UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1
namespace UnityEngine::ResourceManagement::AsyncOperations {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement.AsyncOperations::AsyncOperationBase`1<TObject>*
class CORDL_TYPE AsyncOperationBase_1<TObject> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass58_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0<TObject>;

using __c__DisplayClass57_0 = ::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0<TObject>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::System::Object)]{};

/// @brief Field <Result>k__BackingField offset 0x10
 __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField)) TObject  _Result_k__BackingField;

/// @brief Field m_referenceCount offset 0x18
 __declspec(property(get=__get_m_referenceCount, put=__set_m_referenceCount)) int32_t  m_referenceCount;

/// @brief Field m_Status offset 0x1c
 __declspec(property(get=__get_m_Status, put=__set_m_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  m_Status;

/// @brief Field m_Error offset 0x20
 __declspec(property(get=__get_m_Error, put=__set_m_Error)) ::System::Exception*  m_Error;

/// @brief Field m_RM offset 0x28
 __declspec(property(get=__get_m_RM, put=__set_m_RM)) ::UnityEngine::ResourceManagement::ResourceManager*  m_RM;

/// @brief Field m_Version offset 0x30
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_DestroyedAction offset 0x38
 __declspec(property(get=__get_m_DestroyedAction, put=__set_m_DestroyedAction)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_DestroyedAction;

/// @brief Field m_CompletedActionT offset 0x40
 __declspec(property(get=__get_m_CompletedActionT, put=__set_m_CompletedActionT)) ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_CompletedActionT;

/// @brief Field m_OnDestroyAction offset 0x48
 __declspec(property(get=__get_m_OnDestroyAction, put=__set_m_OnDestroyAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  m_OnDestroyAction;

/// @brief Field m_dependencyCompleteAction offset 0x50
 __declspec(property(get=__get_m_dependencyCompleteAction, put=__set_m_dependencyCompleteAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_dependencyCompleteAction;

/// @brief Field HasExecuted offset 0x58
 __declspec(property(get=__get_HasExecuted, put=__set_HasExecuted)) bool  HasExecuted;

/// @brief Field <IsRunning>k__BackingField offset 0x59
 __declspec(property(get=__get__IsRunning_k__BackingField, put=__set__IsRunning_k__BackingField)) bool  _IsRunning_k__BackingField;

/// @brief Field m_taskCompletionSource offset 0x60
 __declspec(property(get=__get_m_taskCompletionSource, put=__set_m_taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<TObject>*  m_taskCompletionSource;

/// @brief Field m_taskCompletionSourceTypeless offset 0x68
 __declspec(property(get=__get_m_taskCompletionSourceTypeless, put=__set_m_taskCompletionSourceTypeless)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  m_taskCompletionSourceTypeless;

/// @brief Field m_InDeferredCallbackQueue offset 0x70
 __declspec(property(get=__get_m_InDeferredCallbackQueue, put=__set_m_InDeferredCallbackQueue)) bool  m_InDeferredCallbackQueue;

/// @brief Field m_UpdateCallbacks offset 0x78
 __declspec(property(get=__get_m_UpdateCallbacks, put=__set_m_UpdateCallbacks)) ::GlobalNamespace::DelegateList_1<float_t>*  m_UpdateCallbacks;

/// @brief Field m_UpdateCallback offset 0x80
 __declspec(property(get=__get_m_UpdateCallback, put=__set_m_UpdateCallback)) ::System::Action_1<float_t>*  m_UpdateCallback;

 __declspec(property(get=get_Progress)) float_t  Progress;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

 __declspec(property(get=get_Result, put=set_Result)) TObject  Result;

 __declspec(property(get=get_Version)) int32_t  Version;

 __declspec(property(get=get_CompletedEventHasListeners)) bool  CompletedEventHasListeners;

 __declspec(property(get=get_DestroyedEventHasListeners)) bool  DestroyedEventHasListeners;

 __declspec(property(put=set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  OnDestroy;

 __declspec(property(get=get_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_IsRunning, put=set_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_Task)) ::System::Threading::Tasks::Task_1<TObject>*  Task;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task)) ::System::Threading::Tasks::Task_1<::System::Object*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Task;

 __declspec(property(get=get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  Status;

 __declspec(property(get=get_OperationException, put=set_OperationException)) ::System::Exception*  OperationException;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

 __declspec(property(get=get_IsDone)) bool  IsDone;

 __declspec(property(get=get_PercentComplete)) float_t  PercentComplete;

 __declspec(property(get=get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  Handle;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Version;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount)) int32_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ReferenceCount;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete)) float_t  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_PercentComplete;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Status;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException)) ::System::Exception*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OperationException;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone)) bool  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IsDone;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Handle;

 __declspec(property(put=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_OnDestroy;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName)) ::StringW  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DebugName;

 __declspec(property(get=UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType)) ::System::Type*  UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_ResultType;

/// @brief Convert operator to "::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation"
constexpr operator  ::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*() noexcept;

constexpr void __set__Result_k__BackingField(TObject  value) ;

constexpr TObject& __get__Result_k__BackingField() ;

constexpr TObject const& __get__Result_k__BackingField() const;

constexpr void __set_m_referenceCount(int32_t  value) ;

constexpr int32_t& __get_m_referenceCount() ;

constexpr int32_t const& __get_m_referenceCount() const;

constexpr void __set_m_Status(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus& __get_m_Status() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus const& __get_m_Status() const;

constexpr void __set_m_Error(::System::Exception*  value) ;

constexpr ::System::Exception* __get_m_Error() ;

constexpr ::cordl_internals::to_const_pointer<::System::Exception*> __get_m_Error() const;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager*  value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager* __get_m_RM() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceManager*> __get_m_RM() const;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_DestroyedAction(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_DestroyedAction() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_DestroyedAction() const;

constexpr void __set_m_CompletedActionT(::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* __get_m_CompletedActionT() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*> __get_m_CompletedActionT() const;

constexpr void __set_m_OnDestroyAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>* __get_m_OnDestroyAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*> __get_m_OnDestroyAction() const;

constexpr void __set_m_dependencyCompleteAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* __get_m_dependencyCompleteAction() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> __get_m_dependencyCompleteAction() const;

constexpr void __set_HasExecuted(bool  value) ;

constexpr bool& __get_HasExecuted() ;

constexpr bool const& __get_HasExecuted() const;

constexpr void __set__IsRunning_k__BackingField(bool  value) ;

constexpr bool& __get__IsRunning_k__BackingField() ;

constexpr bool const& __get__IsRunning_k__BackingField() const;

constexpr void __set_m_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<TObject>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TObject>* __get_m_taskCompletionSource() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<TObject>*> __get_m_taskCompletionSource() const;

constexpr void __set_m_taskCompletionSourceTypeless(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* __get_m_taskCompletionSourceTypeless() ;

constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> __get_m_taskCompletionSourceTypeless() const;

constexpr void __set_m_InDeferredCallbackQueue(bool  value) ;

constexpr bool& __get_m_InDeferredCallbackQueue() ;

constexpr bool const& __get_m_InDeferredCallbackQueue() const;

constexpr void __set_m_UpdateCallbacks(::GlobalNamespace::DelegateList_1<float_t>*  value) ;

constexpr ::GlobalNamespace::DelegateList_1<float_t>* __get_m_UpdateCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DelegateList_1<float_t>*> __get_m_UpdateCallbacks() const;

constexpr void __set_m_UpdateCallback(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_m_UpdateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_m_UpdateCallback() const;

/// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Execute() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Destroy() ;

/// @brief Method get_Progress addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t get_Progress() ;

/// @brief Method get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_DebugName() ;

/// @brief Method GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  dependencies) ;

/// @brief Method get_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline TObject get_Result() ;

/// @brief Method set_Result addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Result(TObject  value) ;

/// @brief Method get_Version addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_Version() ;

/// @brief Method get_CompletedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_CompletedEventHasListeners() ;

/// @brief Method get_DestroyedEventHasListeners addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_DestroyedEventHasListeners() ;

/// @brief Method set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_ReferenceCount() ;

/// @brief Method get_IsRunning addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsRunning() ;

/// @brief Method set_IsRunning addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_IsRunning(bool  value) ;

static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<TObject>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method ShortenPath addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::StringW ShortenPath(::StringW  p, bool  keepExtension) ;

/// @brief Method IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void IncrementReferenceCount() ;

/// @brief Method WaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final true
inline void WaitForCompletion() ;

/// @brief Method InvokeWaitForCompletion addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool InvokeWaitForCompletion() ;

/// @brief Method DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline void DecrementReferenceCount() ;

/// @brief Method get_Task addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Threading::Tasks::Task_1<TObject>* get_Task() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Task addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Threading::Tasks::Task_1<::System::Object*>* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Task() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

/// @brief Method RegisterForDeferredCallbackEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void RegisterForDeferredCallbackEvent(bool  incrementReferenceCount) ;

/// @brief Method add_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

/// @brief Method remove_Completed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Completed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

/// @brief Method add_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual false final false
inline void remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method get_Status addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus get_Status() ;

/// @brief Method get_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Exception* get_OperationException() ;

/// @brief Method set_OperationException addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_OperationException(::System::Exception*  value) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Object* get_Current() ;

/// @brief Method get_IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
inline bool get_IsDone() ;

/// @brief Method get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_PercentComplete() ;

/// @brief Method InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeCompletionEvent() ;

/// @brief Method get_Handle addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> get_Handle() ;

/// @brief Method UpdateCallback addr 0x0 size 0xffffffffffffffff virtual false final false
inline void UpdateCallback(float_t  unscaledDeltaTime) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TObject  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TObject  result, bool  success, ::StringW  errorMsg, bool  releaseDependenciesOnFailure) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Complete(TObject  result, bool  success, ::System::Exception*  exception, bool  releaseDependenciesOnFailure) ;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method InvokeExecute addr 0x0 size 0xffffffffffffffff virtual false final false
inline void InvokeExecute() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_CompletedTypeless addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_CompletedTypeless(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.add_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_add_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.remove_Destroyed addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_remove_Destroyed(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Version addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Version() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline int32_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_PercentComplete addr 0x0 size 0xffffffffffffffff virtual true final true
inline float_t UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_PercentComplete() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Status addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Status() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_OperationException addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Exception* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_OperationException() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_IsDone addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_IsDone() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_Handle addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_Handle() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.set_OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_set_OnDestroy(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation*>*  value) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_DebugName addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::StringW UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_DebugName() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetResultAsObject addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetResultAsObject() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.get_ResultType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_get_ResultType() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDependencies addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDependencies(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  deps) ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.DecrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_DecrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.IncrementReferenceCount addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_IncrementReferenceCount() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.InvokeCompletionEvent addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_InvokeCompletionEvent() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.Start addr 0x0 size 0xffffffffffffffff virtual true final true
inline void UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_Start(::UnityEngine::ResourceManagement::ResourceManager*  rm, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  dependency, ::GlobalNamespace::DelegateList_1<float_t>*  updateCallbacks) ;

/// @brief Method ReleaseDependencies addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseDependencies() ;

/// @brief Method UnityEngine.ResourceManagement.AsyncOperations.IAsyncOperation.GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus UnityEngine_ResourceManagement_AsyncOperations_IAsyncOperation_GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method GetDownloadStatus addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus(::System::Collections::Generic::HashSet_1<::System::Object*>*  visited) ;

/// @brief Method <.ctor>b__35_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__35_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  o) ;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationBase_1(AsyncOperationBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationBase_1(AsyncOperationBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsyncOperationBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass57_0, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationBase`1/<>c__DisplayClass57_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::AsyncOperations::__AsyncOperationBase_1____c__DisplayClass58_0, "UnityEngine.ResourceManagement.AsyncOperations", "AsyncOperationBase`1/<>c__DisplayClass58_0");
