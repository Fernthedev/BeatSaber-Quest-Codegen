#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionPool_2)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::Pool {
template<typename T>
struct PooledObject_1;
}
namespace UnityEngine::Pool {
template<typename TCollection,typename TItem>
class __CollectionPool_2____c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDElementDescriptor;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Pool {
template<typename TCollection,typename TItem>
class CollectionPool_2;
}
namespace UnityEngine::Pool {
template<typename TCollection,typename TItem>
class __CollectionPool_2____c;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Color32>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::UIVertex>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Vector3>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,::UnityEngine::Vector4>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection,::il2cpp_utils::il2cpp_reference_type TItem>
class CollectionPool_2<TCollection,TItem>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class CollectionPool_2<TCollection,int32_t>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,::UnityEngine::Color32>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,::UnityEngine::UIVertex>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,::UnityEngine::Vector3>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,::UnityEngine::Vector4>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection,::il2cpp_utils::il2cpp_reference_type TItem>
class __CollectionPool_2____c<TCollection,TItem>;
}
namespace UnityEngine::Pool {
template<::il2cpp_utils::il2cpp_reference_type TCollection>
class __CollectionPool_2____c<TCollection,int32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::CollectionPool_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Pool::__CollectionPool_2____c);
// Type: ::<>c
// Type: UnityEngine.Pool::CollectionPool`2
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 6121 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 6120 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,::UnityEngine::Vector4> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector4>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector4>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector4>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 6119 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,::UnityEngine::UIVertex> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::UIVertex>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 5314 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,::UnityEngine::Vector3> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector3>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector3>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Vector3>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10443))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 1629 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,int32_t> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,int32_t>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,int32_t>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,int32_t>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 1627 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,::UnityEngine::Color32> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Color32>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Color32>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,::UnityEngine::Color32>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: ::<>c
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection,::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10443)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10443), inst: 81 })
// CS Name: ::CollectionPool`2::<>c<TCollection,TItem>*
class CORDL_TYPE __CollectionPool_2____c<TCollection,TItem> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Pool::__CollectionPool_2____c<TCollection,TItem>*  value) ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,TItem>* getStaticF___9() ;

static inline ::UnityEngine::Pool::__CollectionPool_2____c<TCollection,TItem>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline TCollection __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __cctor_b__5_1(TCollection  l) ;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CollectionPool_2____c(__CollectionPool_2____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CollectionPool_2____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CollectionPool_2____c(__CollectionPool_2____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __CollectionPool_2____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10444)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 6121 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, ::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10444))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 6120 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Vector4> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, ::UnityEngine::Vector4>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10444)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 6119 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::UIVertex> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, ::UnityEngine::UIVertex>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10444))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 5314 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Vector3> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, ::UnityEngine::Vector3>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10444))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 1629 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,int32_t> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10444)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 1627 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,::UnityEngine::Color32> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, ::UnityEngine::Color32>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
// Type: UnityEngine.Pool::CollectionPool`2
namespace UnityEngine::Pool {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TCollection,::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10444))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10444), inst: 81 })
// CS Name: ::UnityEngine.Pool::CollectionPool`2<TCollection,TItem>*
class CORDL_TYPE CollectionPool_2<TCollection,TItem> : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::Pool::__CollectionPool_2____c<TCollection, TItem>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_Pool(::UnityEngine::Pool::ObjectPool_1<TCollection>*  value) ;

static inline ::UnityEngine::Pool::ObjectPool_1<TCollection>* getStaticF_s_Pool() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline TCollection Get() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::Pool::PooledObject_1<TCollection> Get(ByRef<TCollection>  value) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(TCollection  toRelease) ;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionPool_2(CollectionPool_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionPool_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionPool_2(CollectionPool_2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CollectionPool_2()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Pool
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::CollectionPool_2, "UnityEngine.Pool", "CollectionPool`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::__CollectionPool_2____c, "UnityEngine.Pool", "CollectionPool`2/<>c");
